CREATE TABLE IF NOT EXISTS 'SelectedDevice' (
	`def_file`	Text,
	`family_uid`	Text,
	`flash`	Text,
	`icon`	Text,
	`max_speed`	Text,
	`name`	Text NOT NULL,
	`ram`	Text,
	`sdk_config`	Text,
	`necto_config`	Text,
	`uid`	Text NOT NULL,
	`vendor`	Text,
	`compiler_flags`	Text,
	`linker_flags`	Text,
	`tft_socket`	BOOLEAN,
	`sdk_support`	BOOLEAN,
	PRIMARY KEY(`uid`),
	CONSTRAINT `unique_uid` UNIQUE(`uid`)
)
