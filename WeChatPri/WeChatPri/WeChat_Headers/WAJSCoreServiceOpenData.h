//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAAppTaskReferrerInfo, WAApptaskPluginResInfo;

@interface WAJSCoreServiceOpenData : NSObject
{
    _Bool _reLaunch;
    WAAppTaskReferrerInfo *_referrerInfo;
    WAApptaskPluginResInfo *_pluginResInfo;
}

@property(nonatomic) _Bool reLaunch; // @synthesize reLaunch=_reLaunch;
@property(retain, nonatomic) WAApptaskPluginResInfo *pluginResInfo; // @synthesize pluginResInfo=_pluginResInfo;
@property(retain, nonatomic) WAAppTaskReferrerInfo *referrerInfo; // @synthesize referrerInfo=_referrerInfo;
- (void).cxx_destruct;

@end

