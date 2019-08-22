//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSListItemsController : PSListController
{
    long long _rowToSelect;
    _Bool _deferItemSelection;
    _Bool _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
    id _retainedTarget;
}

- (void)setIsRestrictionList:(_Bool)arg1;
- (_Bool)isRestrictionList;
- (id)specifiers;
- (id)itemsFromDataSource;
- (id)itemsFromParent;
- (void)_addStaticText:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)listItemSelected:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)prepareSpecifiersMetadata;
- (void)didLock;
- (void)suspend;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (void)setRowToSelect;
- (void)scrollToSelectedCell;
- (void)viewWillAppear:(_Bool)arg1;

@end
