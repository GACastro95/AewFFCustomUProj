// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/yMenuUI_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyMenuUI_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UyMenuUI_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UyMenuUI_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UyMenuUI_DebugMenu::execIsDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UyMenuUI_DebugMenu::execIsDebugWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDebugWindow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UyMenuUI_DebugMenu::execSetDebugString)
	{
		P_GET_UBOOL(Z_Param__Flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugString(Z_Param__Flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UyMenuUI_DebugMenu::execSetDebugWindow)
	{
		P_GET_UBOOL(Z_Param__Flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugWindow(Z_Param__Flg);
		P_NATIVE_END;
	}
	void UyMenuUI_DebugMenu::StaticRegisterNativesUyMenuUI_DebugMenu()
	{
		UClass* Class = UyMenuUI_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDebugString", &UyMenuUI_DebugMenu::execIsDebugString },
			{ "IsDebugWindow", &UyMenuUI_DebugMenu::execIsDebugWindow },
			{ "SetDebugString", &UyMenuUI_DebugMenu::execSetDebugString },
			{ "SetDebugWindow", &UyMenuUI_DebugMenu::execSetDebugWindow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics
	{
		struct yMenuUI_DebugMenu_eventIsDebugString_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((yMenuUI_DebugMenu_eventIsDebugString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(yMenuUI_DebugMenu_eventIsDebugString_Parms), &Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/yMenuUI_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UyMenuUI_DebugMenu, nullptr, "IsDebugString", nullptr, nullptr, sizeof(yMenuUI_DebugMenu_eventIsDebugString_Parms), Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics
	{
		struct yMenuUI_DebugMenu_eventIsDebugWindow_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((yMenuUI_DebugMenu_eventIsDebugWindow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(yMenuUI_DebugMenu_eventIsDebugWindow_Parms), &Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/yMenuUI_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UyMenuUI_DebugMenu, nullptr, "IsDebugWindow", nullptr, nullptr, sizeof(yMenuUI_DebugMenu_eventIsDebugWindow_Parms), Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics
	{
		struct yMenuUI_DebugMenu_eventSetDebugString_Parms
		{
			bool _Flg;
		};
		static void NewProp__Flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::NewProp__Flg_SetBit(void* Obj)
	{
		((yMenuUI_DebugMenu_eventSetDebugString_Parms*)Obj)->_Flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::NewProp__Flg = { "_Flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(yMenuUI_DebugMenu_eventSetDebugString_Parms), &Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::NewProp__Flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::NewProp__Flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/yMenuUI_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UyMenuUI_DebugMenu, nullptr, "SetDebugString", nullptr, nullptr, sizeof(yMenuUI_DebugMenu_eventSetDebugString_Parms), Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics
	{
		struct yMenuUI_DebugMenu_eventSetDebugWindow_Parms
		{
			bool _Flg;
		};
		static void NewProp__Flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::NewProp__Flg_SetBit(void* Obj)
	{
		((yMenuUI_DebugMenu_eventSetDebugWindow_Parms*)Obj)->_Flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::NewProp__Flg = { "_Flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(yMenuUI_DebugMenu_eventSetDebugWindow_Parms), &Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::NewProp__Flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::NewProp__Flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/yMenuUI_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UyMenuUI_DebugMenu, nullptr, "SetDebugWindow", nullptr, nullptr, sizeof(yMenuUI_DebugMenu_eventSetDebugWindow_Parms), Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UyMenuUI_DebugMenu_NoRegister()
	{
		return UyMenuUI_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UyMenuUI_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UyMenuUI_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UyMenuUI_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugString, "IsDebugString" }, // 887191367
		{ &Z_Construct_UFunction_UyMenuUI_DebugMenu_IsDebugWindow, "IsDebugWindow" }, // 165566915
		{ &Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugString, "SetDebugString" }, // 383916399
		{ &Z_Construct_UFunction_UyMenuUI_DebugMenu_SetDebugWindow, "SetDebugWindow" }, // 3679325515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UyMenuUI_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "yMenuUI_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/yMenuUI_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UyMenuUI_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UyMenuUI_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UyMenuUI_DebugMenu_Statics::ClassParams = {
		&UyMenuUI_DebugMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UyMenuUI_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UyMenuUI_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UyMenuUI_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UyMenuUI_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UyMenuUI_DebugMenu, 1937152751);
	template<> ABP_200508_API UClass* StaticClass<UyMenuUI_DebugMenu>()
	{
		return UyMenuUI_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UyMenuUI_DebugMenu(Z_Construct_UClass_UyMenuUI_DebugMenu, &UyMenuUI_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UyMenuUI_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UyMenuUI_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
