# `Heatmap` Component API

## Props

| Prop       | Type                     | Default | Note                                                              |
| ---------- | ------------------------ | ------- | ----------------------------------------------------------------- |
| `points`   | `array(LatLng.weighted)` |         | Array of heatmap entries to apply towards density.                |
| `radius`   | `int`                    | `20`    | The radius of the heatmap points in pixels, between 10 and 50.    |
| `opacity`  | `float`                  | `0.7`   | The opacity of the heatmap.                                       |
| `gradient` | `gradient`               |         | Heatmap gradient configuration (See below for _Gradient Config_). |

## Type

### `gradient`

[Android Doc](https://developers.google.com/maps/documentation/android-sdk/utility/heatmap#custom) | [iOS Doc](https://developers.google.com/maps/documentation/ios-sdk/utility/heatmap#customize)

| Prop           | Type                         | Default | Note                                                                                                                                  |
| -------------- | ---------------------------- | ------- | ------------------------------------------------------------------------------------------------------------------------------------- |
| `colors`       | `array(ReactNative.Color.t)` |         | Colors (one or more) to use for gradient.                                                                                             |
| `startPoints`  | `array(float)`               |         | Array of floating point values from 0 to 1 representing where each color starts. Array length must be equal to `colors` array length. |
| `colorMapSize` | `int`                        | `256`   | Resolution of color map -- number corresponding to the number of steps colors are interpolated into.                                  |

```reason
gradient: (~colors: array(ReactNative.Color.t), ~startPoints: array(float), ~colorMapSize: int=?, unit) => gradient
```
