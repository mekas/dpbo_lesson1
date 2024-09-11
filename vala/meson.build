lesson1_sources = [
  'main.vala','myclass.vala'
]

lesson1_deps = [
  dependency('glib-2.0'),
  dependency('gobject-2.0'),
]

executable('lesson1', lesson1_sources,
  vala_args: '--target-glib=2.58',  dependencies: lesson1_deps,
  install: true,
)

