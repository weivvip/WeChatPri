//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCDataBase, WCDataBaseTable;

@interface EnterpriseBrandAttrDB : NSObject
{
    WCDataBase *_db;
    WCDataBaseTable *_table;
}

- (void).cxx_destruct;
- (_Bool)setAttr:(id)arg1 onProperties:(const vector_24c76cbd *)arg2;
- (_Bool)deleteAttrByUserName:(id)arg1;
- (id)getAttrByUserName:(id)arg1;
- (void)closeDB;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

