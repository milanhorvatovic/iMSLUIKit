//
//  CustomMapView.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 16/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <MapKit/MapKit.h>
//@import MapKit;

@interface iMSLMapView : MKMapView

@property (nonatomic, strong, readonly) NSArray *calloutViews;

- (void)addCustomCalloutView:(UIView *)calloutView;
- (void)removeCustomCalloutView:(UIView *)calloutView;

@end
