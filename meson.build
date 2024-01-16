project(
  'thunderbid-tray-icon',
  'cpp',
  license: 'MIT',
  license_files: 'LICENSE',
  default_options: ['cpp_std=c++17']
)
gtkdep = dependency('gtkmm-3.0')
executable('demo', ['main.cpp', 'tokenizer.cpp'], dependencies: gtkdep)
