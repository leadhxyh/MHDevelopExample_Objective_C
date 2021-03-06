//
//  SUWebView0Controller.h
//  MHDevelopExample
//
//  Created by senba on 2017/6/14.
//  Copyright © 2017年 CoderMikeHe. All rights reserved.
//  MVC 中加载WebView的控制器 -- C

#import "SUView0Controller.h"
#import <WebKit/WebKit.h>

@interface SUWebView0Controller : SUView0Controller<
WKNavigationDelegate,
WKUIDelegate,
WKScriptMessageHandler
>
/// webView
@property (nonatomic, weak, readonly) WKWebView *webView;

/// request
@property (nonatomic, readwrite, copy) NSString *request;

@end
