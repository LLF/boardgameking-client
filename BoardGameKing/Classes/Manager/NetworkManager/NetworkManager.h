//
//  NetworkManager.h
//  BoardGameKing
//
//  Created by 赖 览峰 on 14-8-29.
//
//

#ifndef __BoardGameKing__NetworkManager__
#define __BoardGameKing__NetworkManager__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "json.h"
#include "HttpRequest.h"
#include "Constants.h"
USING_NS_CC;
USING_NS_CC_EXT;
using namespace network;

class NetworkManager : public Ref
{
public:
    NetworkManager();
    virtual ~NetworkManager();
    
    //obtain or construct singleton instance
    static NetworkManager *sharedInstance();
    void NetworkRequest(std::string url,
                        HttpRequest::Type requestType,
                        std::string data,  // TODO 使用get时，暂时无效，后面在完善
                        std::string tag,
                        Ref* caller,
                        SEL_CallFuncND selector,
                        bool loadingScreen = true,
                        bool showErrorDialog = true);
    
	void NetworkRequestPost(std::string url,
                            std::string data,
                            std::string tag,
                            Ref* caller,
                            SEL_CallFuncND selector,
                            bool loadingScreen = true);
    
    void NetworkRequestGet(std::string url,
                           std::string tag,
                           Ref* caller,
                           SEL_CallFuncND selector);
    
    void NetworkRequestForImg(std::string url,
                              HttpRequest::Type requestType,
                              std::string tag,
                              Ref* caller,
                              SEL_CallFuncND selector);
    void NetworkRequestFile(const char *url,
                            std::string data,
                            const char* md5,
                            const char *tag,
                            Ref* caller,
                            SEL_CallFuncND selector);
    bool onNetworkRequestFileComplete(cocos2d::Node *sender, void *data);
    void forwardResponse(HttpResponse* pResponse);
    void NetworkRequestForRetry(HttpRequest *request, bool showLoadingScreen);
	bool onNetworkRequestComplete(void *data);
    bool onNetworkRequestCompleteAsync(void *data); //No loading screen
    bool checkResponse(void *data);
    typedef enum
    {
        DO_NOTHING = 0,
        DO_POPUP_ERROR_DIALOG = 1, //弹出错误框
        DO_RETRY_NETWORK = 2, //弹出重新请求框
        DO_REDIRECTOR = 3, //跳转做其它处理，(暂时没用到)
    } HANDLE_TYPE;
    
    HANDLE_TYPE handleServerError(Constants::SERVER_STATUS, std::string &requestUrl, Json::Value &json, bool showErrorDialog);
    HANDLE_TYPE handleHTTPError(Constants::HTTP_STATUS, HttpRequest* request);
    

};
#endif /* defined(__BoardGameKing__NetworkManager__) */
