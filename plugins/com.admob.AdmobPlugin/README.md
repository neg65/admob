百度移动联盟sdk cordova(phonegap)插件
====================

百度联盟phonegap(cordova)插件，支持ios和android平台
基于phonegap 3.4 或 cordova 3.5编译
官方网址:https://github.com/baidumobad/baidu-phonegap-cordova-sdk
phonegap使用文档
http://docs.phonegap.com/en/edge/guide_cli_index.md.html#The%20Command-line%20Interface  

怎么安装phonegap 百度移动联盟插件?
在命令行中输入
cordova plugin add https://github.com/baidumobad/baidu-phonegap-cordova-sdk
或者把插件下载到本地解压后输入命令
cordova plugin add c:\baidu-phonegap-cordova-sdk

简单使用：
展示banner型广告，debug是百度appid和appsec，上线前注意替换为申请到的正式的
    function showBanner() {
        var successCreateBannerView = function () {
            baiduAd.showBanner(8);//用相对位置的方式展示广告，具体的相对位置的值AD_POSITION中
        };
        var errorCreateBannerView = function (message) {
            console.log("创建广告条失败 " + message);
        };
        baiduAd.initBanner("debug", "debug", successCreateBannerView, errorCreateBannerView);//初始化banner广告
    }
    showBanner();
展示插屏广告：
在cordova应用中展示百度mob全屏插屏广告
 function onInterstitialReceive(message) {
     baiduAd.showInterstitial();//加载完成后展示广告
 }
 function successCreateInterstitial() {
     baiduAd.cacheInterstitial();//创建全屏完成后加载广告
 }
  document.addEventListener('onInterstitialReceive', this.onInterstitialReceive, false);//监听广告加载成功事件
  baiduAd.initInterstitial("debug", "debug", successCreateInterstitial);//创建广告
监听广告事件：
监听处理广告中的事件，例如监听广告接收成功事件
例子参考上面展示全屏广告，更多事件在AdEvent中

更多接口
通过绝对定位的方式展示banner广告
showBannerAbsolute(x,y, successCallback, failureCallback)
隐藏banner广告
hideBanner()
判断全屏广告是否已经加载完成
function isInterstitialReady( successCallback, failureCallback) 


接口的完整使用方式参考demo下代码

特别提醒：
针对ios的项目，需要在xcode对项目进行几项设置
1.设置 工程项目和cordovalib项目的Architectures
xcode项目默认的是包括了armv7,armv7s,arm64的stand结构，需要改成 armv7,armv7s
2.设置工程项目other linker flags
Other Liner Flags 添加-lstdc++
