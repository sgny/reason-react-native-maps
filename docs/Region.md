# `Region`

## Type

### `t`

This type needs to be created, as well as consumed. When the type is returned, individual keys may be accessed using the `##` accessor.


```reason
type t = {
  .
  "latitude": float,
  "longitude": float,
  "latitudeDelta": float,
  "longitudeDelta": float,
};
```

```reason
create:
  (
    ~latitude: float,
    ~longitude: float,
    ~latitudeDelta: float,
    ~longitudeDelta: float
  ) =>
  t
```

`latitude` and `longitude` are self explanatory while `latitudeDelta` and `longitudeDelta` may not.
In [Apple Developer documentation](https://developer.apple.com/reference/mapkit/mkcoordinatespan/1452417-latitudedelta), `latitudeDelta` is explained as:

> The amount of north-to-south distance (measured in degrees) to display on the map. Unlike longitudinal distances, which vary based on the latitude, one degree of latitude is always approximately 111 kilometers (69 miles).

A [visual explanation](https://stackoverflow.com/questions/36685372/how-to-zoom-in-out-in-react-native-map/36688156#36688156) may be found on `stackoverflow`.
