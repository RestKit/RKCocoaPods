RestKit Installation Example with CocoPods
------------------------------------------

This is a simple application created via the Xcode "Master-Detail Application" template. The only changes made to the files were to complete the installation of RestKit via CocoaPods.

The steps taken to create and configure this project were:

1. Create project with Master-Detail template
2. Install CocoaPods: `gem install cocoapods`
3. Create Podfile with the following contents:

```ruby
platform :ios, '5.0'
pod 'RestKit', '~> 0.20.0'
```
4. Install via CocoaPods: `pod install`
5. Close the project and reopen the workspace.
6. Add necessary additions to the .pch file. See `RKCocoaPods-Prefix.pch`
7. Configure RestKit in the App Delegate. See `RKCPAppDelegate.m`
8. Build and Run
