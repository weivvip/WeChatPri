//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface MMAutoSearchItem : MMObject
{
    _Bool _startFromFirst;
    NSString *_keyWord;
}

+ (id)itemWithKeyWord:(id)arg1 startFromFirst:(_Bool)arg2;
@property(nonatomic) _Bool startFromFirst; // @synthesize startFromFirst=_startFromFirst;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
- (void).cxx_destruct;

@end

