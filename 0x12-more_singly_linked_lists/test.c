{
	const list_t *c;
	size_t count;
	for (c = h; c->next != NULL;c = c->next, count++)
	{
		printf("[%d] %s\n", c->len, c->str);

	}
	return (count);
