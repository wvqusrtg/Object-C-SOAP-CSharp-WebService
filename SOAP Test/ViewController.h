//
//  ViewController.h
//  SOAP Test
//
//  Created by Media IOS on 14-12-19.
//  Copyright (c) 2014年 nixinsheng. All rights reserved.
//

#import <UIKit/UIKit.h>
/// 使ViewController遵守这两个协议。前者用来解析XML，后者用于网络连接。
@interface ViewController : UIViewController<NSXMLParserDelegate,  NSURLConnectionDelegate>

@property (weak, nonatomic) IBOutlet UITextField *phoneNumber;
- (IBAction)doQuery:(id)sender;

@property (strong, nonatomic) NSMutableData *webData;
@property (strong, nonatomic) NSMutableString *soapResults;
@property (strong, nonatomic) NSXMLParser *xmlParser;
@property (nonatomic) BOOL elementFound;
@property (strong, nonatomic) NSString *matchingElement;
@property (strong, nonatomic) NSURLConnection *conn;

@end

