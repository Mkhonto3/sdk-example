#import <UIKit/UIKit.h>
#import "IndoorAtlas/IndoorAtlas.h"
#import <MapKit/MapKit.h>

@interface LowPowerViewController : UIViewController
@property (nonatomic, strong) IALocationManager *locationManager;
@property (strong) MKMapView *map;
@end
