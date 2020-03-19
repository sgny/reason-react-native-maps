# `Overlay` Component API

## Props

| Prop      | Type                         | Default                                                                                                                                          | Note                                                                  |
| --------- | ---------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------ | --------------------------------------------------------------------- |
| `image`   | `ReactNative.Image.Source.t` | A custom image to be used as the overlay. Only required local image resources and uri (as for images located in the net) are allowed to be used. |
| `bounds`  | `(LatLng.t, LatLng.t)`       |                                                                                                                                                  | The coordinates for the image (top-left corner, bottom-right corner). |
| `opacity` | `float`                      | _Google Maps only_ Opacity of the overlay.                                                                                                       |

| `tappable` | `bool` | `false` | `Android only` to allow an overlay to be
tappable and use the onPress function. |

## Events

| Event Name | Returns                                                           | Notes                                                                       |
| ---------- | ----------------------------------------------------------------- | --------------------------------------------------------------------------- |
| `onPress`  | `{. "action": string, "coordinate": LatLng.t, "position": point}` | `Android only` Callback that is called when the user presses on the overlay |
