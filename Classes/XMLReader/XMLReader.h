//
//  XMLReader.h
//
//  Created by Troy on 9/18/10.
//  Copyright 2010 Troy Brant. All rights reserved.
//

// http://troybrant.net/blog/2010/09/simple-xml-to-nsdictionary-converter/

#import <Foundation/Foundation.h>


@interface XMLReader : NSObject <NSXMLParserDelegate>
{
    NSMutableArray *dictionaryStack;
    NSMutableString *textInProgress;
    NSError **errorPointer;
}

+ (NSDictionary *)dictionaryForXMLData:(NSData *)data error:(NSError **)errorPointer;
+ (NSDictionary *)dictionaryForXMLString:(NSString *)string error:(NSError **)errorPointer;

@end
