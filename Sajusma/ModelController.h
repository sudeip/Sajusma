//
//  ModelController.h
//  Sajusma
//
//  Created by Sudeep Jain on 2/20/16.
//  Copyright © 2016 Sudeep Jain. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

