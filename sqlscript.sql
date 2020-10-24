/* Create a new database named app_db and use it */
CREATE DATABASE IF NOT EXISTS app_db;
USE app_db;

/* Create a new users table */
CREATE TABLE IF NOT EXISTS users (
    id INT AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    password VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL UNIQUE,
    active BOOL DEFAULT TRUE,
    PRIMARY KEY(id)
);

/* Verify the layout of the users table */
DESC users;

/* Create a new role called role_app_dev and show default privileges */
CREATE ROLE role_app_dev;
SHOW GRANTS FOR role_app_dev;

/* Grant ALL privileges on the app_db to the role and verify privileges */
GRANT ALL ON app_db.* TO role_app_dev;
SHOW GRANTS FOR role_app_dev;

/* Create a new user called hetal@localhost */
CREATE USER hetal@localhost IDENTIFIED BY 'hetal123';

/* Apply the role to the new user and verify */
GRANT role_app_dev TO hetal@localhost;
SHOW GRANTS FOR hetal@localhost USING role_app_dev;

/* Activate all of user's roles after logging into MySQL */
SET DEFAULT ROLE ALL TO hetal@localhost;