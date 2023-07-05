// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YRosterModelPreview_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYRosterModelPreview_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYRosterModelPreview_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYRosterModelPreview_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UYRosterModelPreview_DebugMenu::execIsStartRosterModelPreviewLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStartRosterModelPreviewLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYRosterModelPreview_DebugMenu::execSetStartRosterModelPreviewLevel)
	{
		P_GET_UBOOL(Z_Param__bStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartRosterModelPreviewLevel(Z_Param__bStart);
		P_NATIVE_END;
	}
	void UYRosterModelPreview_DebugMenu::StaticRegisterNativesUYRosterModelPreview_DebugMenu()
	{
		UClass* Class = UYRosterModelPreview_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsStartRosterModelPreviewLevel", &UYRosterModelPreview_DebugMenu::execIsStartRosterModelPreviewLevel },
			{ "SetStartRosterModelPreviewLevel", &UYRosterModelPreview_DebugMenu::execSetStartRosterModelPreviewLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics
	{
		struct YRosterModelPreview_DebugMenu_eventIsStartRosterModelPreviewLevel_Parms
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
	void Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YRosterModelPreview_DebugMenu_eventIsStartRosterModelPreviewLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YRosterModelPreview_DebugMenu_eventIsStartRosterModelPreviewLevel_Parms), &Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YRosterModelPreview_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYRosterModelPreview_DebugMenu, nullptr, "IsStartRosterModelPreviewLevel", nullptr, nullptr, sizeof(YRosterModelPreview_DebugMenu_eventIsStartRosterModelPreviewLevel_Parms), Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics
	{
		struct YRosterModelPreview_DebugMenu_eventSetStartRosterModelPreviewLevel_Parms
		{
			bool _bStart;
		};
		static void NewProp__bStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::NewProp__bStart_SetBit(void* Obj)
	{
		((YRosterModelPreview_DebugMenu_eventSetStartRosterModelPreviewLevel_Parms*)Obj)->_bStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::NewProp__bStart = { "_bStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YRosterModelPreview_DebugMenu_eventSetStartRosterModelPreviewLevel_Parms), &Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::NewProp__bStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::NewProp__bStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YRosterModelPreview_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYRosterModelPreview_DebugMenu, nullptr, "SetStartRosterModelPreviewLevel", nullptr, nullptr, sizeof(YRosterModelPreview_DebugMenu_eventSetStartRosterModelPreviewLevel_Parms), Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYRosterModelPreview_DebugMenu_NoRegister()
	{
		return UYRosterModelPreview_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYRosterModelPreview_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYRosterModelPreview_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYRosterModelPreview_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_IsStartRosterModelPreviewLevel, "IsStartRosterModelPreviewLevel" }, // 2395901737
		{ &Z_Construct_UFunction_UYRosterModelPreview_DebugMenu_SetStartRosterModelPreviewLevel, "SetStartRosterModelPreviewLevel" }, // 940603301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYRosterModelPreview_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YRosterModelPreview_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YRosterModelPreview_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYRosterModelPreview_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYRosterModelPreview_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYRosterModelPreview_DebugMenu_Statics::ClassParams = {
		&UYRosterModelPreview_DebugMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYRosterModelPreview_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYRosterModelPreview_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYRosterModelPreview_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYRosterModelPreview_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYRosterModelPreview_DebugMenu, 2728035276);
	template<> ABP_200508_API UClass* StaticClass<UYRosterModelPreview_DebugMenu>()
	{
		return UYRosterModelPreview_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYRosterModelPreview_DebugMenu(Z_Construct_UClass_UYRosterModelPreview_DebugMenu, &UYRosterModelPreview_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYRosterModelPreview_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYRosterModelPreview_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
