//
//  AppDelegate.h
//  windowtest
//
//  Created by Umit Kitapcigil on 9/23/12.
//  Copyright (c) 2012 Umit Kitapcigil. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>
#import <Carbon/Carbon.h>
#import "INAppStoreWindow.h"
#import <IOKit/hidsystem/ev_keymap.h>

#import "SPMediaKeyTap.h"
@interface MediaKeyIntercept : NSApplication
@end
@interface AppDelegate : NSObject <NSApplicationDelegate>  {
    WebView *webview;
    WebScriptObject *scriptObject ;
    SPMediaKeyTap *keyTap;
}

@property (assign) IBOutlet INAppStoreWindow *window;
@property (retain, nonatomic) IBOutlet WebView *webview;
@property (retain, nonatomic) IBOutlet id btn;
- (IBAction)doPlayPause:(id)sender;
- (IBAction)doNext:(id)sender;
- (IBAction)doPrevious:(id)sender;

@end
