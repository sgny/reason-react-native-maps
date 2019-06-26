include Shared;

type element;

[@react.component] [@bs.module "react-native-maps/lib/components/MapMarker"]
external make:
  (
    ~title: string=?,
    ~description: string=?,
    ~image: ReactNative.Image.Source.t=?,
    ~icon: ReactNative.Image.Source.t=?,
    ~pinColor: string=?,
    ~coordinate: LatLng.t,
    ~centerOffset: point=?,
    ~calloutOffset: point=?,
    ~anchor: point=?,
    ~calloutAnchor: point=?,
    ~flat: bool=?,
    ~identifier: string=?,
    ~rotation: float=?,
    ~draggable: bool=?,
    ~tracksViewChanges: bool=?,
    ~tracksInfoWindowChanges: bool=?,
    ~stopPropagation: bool=?,
    ~opacity: float=?,
    ~onPress: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onSelect: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onDeselect: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onCalloutPress: unit => unit=?,
    ~onDragStart: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onDrag: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onDragEnd: ReactNative.Event.syntheticEvent(copos) => unit=?,
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

[@bs.send] external showCallout: (element, unit) => unit = "";
[@bs.send] external hideCallout: (element, unit) => unit = "";
[@bs.send] external redrawCallout: (element, unit) => unit = "";
[@bs.send]
external animateMarkerToCoordinate: (element, LatLng.t, float) => unit = "";
[@bs.send] external redraw: (element, unit) => unit = "";
