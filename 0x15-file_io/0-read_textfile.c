ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;

	if (letters < 1)
		return ();
	o = open(filename,O_RDWR);
	if (o == NULL)
		return (-1);
	r = read(o, buffer, sizeof(buffer));
}
