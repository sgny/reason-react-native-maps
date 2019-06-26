[@react.component]
[@bs.module "react-native-maps/lib/components/MapCalloutSubview"]
// supports view props
external make:
  (
    ~onPress: unit => unit=?,
    // View props
    ~accessibilityComponentType: [@bs.string] [
                                   | `none
                                   | `button
                                   | `radiobutton_checked
                                   | `radiobutton_unchecked
                                 ]
                                   =?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: [@bs.string] [ | `none | `polite | `assertive]=?,
    ~accessibilityRole: [@bs.string] [
                          | `none
                          | `button
                          | `link
                          | `search
                          | `image
                          | `keyboardkey
                          | `text
                          | `adjustable
                          | `header
                          | `summary
                          | `imagebutton
                        ]
                          =?,
    ~accessibilityStates: array(ReactNative.AccessibilityState.t)=?,
    ~accessibilityTraits: array(ReactNative.AccessibilityTrait.t)=?,
    ~accessibilityViewIsModal: bool=?,
    ~accessible: bool=?,
    ~collapsable: bool=?,
    ~hitSlop: ReactNative.View.edgeInsets=?,
    ~importantForAccessibility: [@bs.string] [
                                  | `auto
                                  | `yes
                                  | `no
                                  | [@bs.as "no-hide-descendants"]
                                    `noHideDescendants
                                ]
                                  =?,
    ~nativeID: string=?,
    ~needsOffscreenAlphaCompositing: bool=?,
    ~onAccessibilityEscape: unit => unit=?,
    ~onAccessibilityTap: unit => unit=?,
    ~onLayout: ReactNative.Event.layoutEvent => unit=?,
    ~onMagicTap: unit => unit=?,
    // Gesture Responder props
    ~onMoveShouldSetResponder: ReactNative.Event.pressEvent => bool=?,
    ~onMoveShouldSetResponderCapture: ReactNative.Event.pressEvent => bool=?,
    ~onResponderEnd: ReactNative.Event.pressEvent => unit=?,
    ~onResponderGrant: ReactNative.Event.pressEvent => unit=?,
    ~onResponderMove: ReactNative.Event.pressEvent => unit=?,
    ~onResponderReject: ReactNative.Event.pressEvent => unit=?,
    ~onResponderRelease: ReactNative.Event.pressEvent => unit=?,
    ~onResponderStart: ReactNative.Event.pressEvent => unit=?,
    ~onResponderTerminate: ReactNative.Event.pressEvent => unit=?,
    ~onResponderTerminationRequest: ReactNative.Event.pressEvent => bool=?,
    ~onStartShouldSetResponder: ReactNative.Event.pressEvent => bool=?,
    ~onStartShouldSetResponderCapture: ReactNative.Event.pressEvent => bool=?,
    ~pointerEvents: [@bs.string] [
                      | `auto
                      | `none
                      | [@bs.as "box-none"] `boxNone
                      | [@bs.as "box-only"] `boxOnly
                    ]
                      =?,
    ~removeClippedSubviews: bool=?,
    ~renderToHardwareTextureAndroid: bool=?,
    ~shouldRasterizeIOS: bool=?,
    ~style: ReactNative.Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";
