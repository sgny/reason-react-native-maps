# `Circle` Component API

## Props

| Prop | Type | Default | Note |
|---|---|---|---|
| `center` | `LatLng.t` | (Required) | The coordinate of the center of the circle
| `radius` | `float` | (Required) | The radius of the circle to be drawn (in meters)
| `strokeWidth` | `float` | `1.0` | The stroke width to use for the path.
| `strokeColor` | `ReactNative.Color.t` | `#000`, `rgba(r,g,b,0.5)` | The stroke color to use for the path.
| `fillColor` | `ReactNative.Color.t` | `#000`, `rgba(r,g,b,0.5)` | The fill color to use for the path.
| `zIndex` | `int` | 0 | The order in which this tile overlay is drawn with respect to other overlays. An overlay with a larger z-index is drawn over overlays with smaller z-indices. The order of overlays with the same z-index is arbitrary. The default zIndex is 0. (Android Only)
| `lineCap` | \[ \| \`butt \| \`round \| \`square \]  | \`round | The line cap style to apply to the open ends of the path.
| `lineJoin` | \[ \| \`bevel \| \`miter \| \`round \] |  | The line join style to apply to corners of the path.
| `miterLimit` | `int` | `10` | The limiting value that helps avoid spikes at junctions between connected line segments. The miter limit helps you avoid spikes in paths that use the `miter` `lineJoin` style. If the ratio of miter length (diagonal length of the miter join) to line thickness exceeds the miter limit, the joint is converted to a bevel join. The default miter limit is `10`, which results in the conversion of miters whose angle at the joint is less than 11 degrees.
| `geodesic` | `bool` |  | to indicate whether to draw each segment of the line as a geodesic as opposed to straight lines on the Mercator projection. A geodesic is the shortest path between two points on the Earth's surface. The geodesic curve is constructed assuming the Earth is a sphere.
| `lineDashPhase` | `int` | `0` | (iOS only) The offset (in points) at which to start drawing the dash pattern. Use this property to start drawing a dashed line partway through a segment or gap. For example, a phase value of `6` for the pattern `[| 5, 2, 3, 2|]` would cause drawing to begin in the middle of the first gap.
| `lineDashPattern` | `array(int)` |  | (iOS only) An array of numbers specifying the dash pattern to use for the path. The array contains one or more numbers that indicate the lengths (measured in points) of the  line segments and gaps in the pattern. The values in the array alternate, starting with the first line segment length, followed by the first gap length, followed by the second line segment length, and so on.