/** <pre><code>int **allocate_map(int n, int m)
  * {
  **/
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
}
