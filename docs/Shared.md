# `Shared`

## Types

### `point`

This type needs to be created, as well as consumed. When the type is returned,
individual keys may be accessed using the `##` accessor.

```reason
type point = {
  .
  "y": float,
  "x": float,
};
```

```reason
point: (~x: float, ~y: float) => point
```

### `copos`

```reason
type copos = {
  .
  "coordinate": LatLng.t,
  "position": point,
};
```

### `poi`

```reason
type poi = {
  .
  "coordinate": LatLng.t,
  "position": point,
  "placeId": string,
  "name": string,
};
```
