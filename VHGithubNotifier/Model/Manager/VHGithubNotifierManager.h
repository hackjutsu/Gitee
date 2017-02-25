//
//  VHGithubNotifierManager.h
//  VHGithubNotifier
//
//  Created by viktorhuang on 2016/12/25.
//  Copyright © 2016年 黄伟平. All rights reserved.
//

#import "VHUser.h"
#import "VHLanguage.h"
#import "VHTrendingRepository.h"

@interface VHGithubNotifierManager : NSObject

@property (nonatomic, strong) VHUser *user;
@property (nonatomic, strong) NSArray<VHLanguage *> *languages;
@property (nonatomic, strong) NSArray<VHTrendingRepository *> *trendingRepositories;

+ (instancetype)sharedManager;

- (void)startTimerOfUpdatingUserAccountInfoAndRepositoriesOfUser;

- (void)stop;

- (void)redirectLogToDocuments;

- (void)confirmUserAccount:(NSString *)username withPassword:(NSString *)password;

- (BOOL)userAccountInfoExist;

@end