# Git Branching Guide

This file explains how you and your friend can set up and use separate branches for development.

## 👥 Create a Branch (Each Developer)
Run this in the terminal:

```
git checkout -b feature/your-name
```

Example:
```
git checkout -b feature/alex
```

Then push the branch:
```
git push --set-upstream origin feature/your-name
```

## 🔄 Switch Between Branches
To go back to `main`:
```
git checkout main
```

To return to your branch:
```
git checkout feature/your-name
```

## ✅ Workflow
1. Create your branch.
2. Make your changes.
3. Commit and push.
4. Open a Pull Request on GitHub to merge into `main`.

---

This helps avoid conflicts and keeps your work organized. Let each developer work on their own branch until ready to merge.

