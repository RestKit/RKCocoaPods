RestKit Installation Example with CocoPods
------------------------------------------

This is a simple application created via the Xcode "Master-Detail Application" template. The only changes made to the files were to complete the installation of RestKit via CocoaPods.

The steps taken to create and configure this project were:

1. Create project with Master-Detail template
1. Install CocoaPods: `gem install cocoapods`
1. Create Podfile with the following contents:
```ruby
platform :ios, '5.0'
pod 'RestKit', :git => 'https://github.com/RestKit/RestKit.git', :branch => 'development'
```
1. Install via CocoaPods: `pod install`
1. Close the project and reopen the workspace.
1. Add necessary additions to the .pch file. See `RKCocoaPods-Prefix.pch`
1. Configure RestKit in the App Delegate. See `RKCPAppDelegate.m`
1. Build and Run
