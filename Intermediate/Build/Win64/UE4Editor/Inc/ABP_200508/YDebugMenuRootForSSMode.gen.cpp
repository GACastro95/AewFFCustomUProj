// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YDebugMenuRootForSSMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuRootForSSMode() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYDebugMenuRootForSSMode_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYDebugMenuRootForSSMode();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuManager_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode();
// End Cross Module References
	DEFINE_FUNCTION(UYDebugMenuRootForSSMode::execCreateAndRegistForSSModeDebugMenu)
	{
		P_GET_OBJECT_REF(UYDebugMenuRootForSSMode,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_GET_OBJECT(UELDebugMenuManager,Z_Param__pcELDebugMenuMaanger);
		P_GET_TARRAY_REF(FELDebugMenuShortcutKeySettings,Z_Param_Out__cShortcuts);
		P_GET_TARRAY_REF(FELDebugMenuShortcutKeySettings,Z_Param_Out__cCloseShortcuts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuRootForSSMode::CreateAndRegistForSSModeDebugMenu(Z_Param_Out__pcInst,Z_Param__strRegistKey,Z_Param__pcELDebugMenuMaanger,Z_Param_Out__cShortcuts,Z_Param_Out__cCloseShortcuts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootForSSMode::execCreateMenu)
	{
		P_GET_STRUCT_REF(FYDebugMenuParamForSSMode,Z_Param_Out__stParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateMenu(Z_Param_Out__stParam);
		P_NATIVE_END;
	}
	void UYDebugMenuRootForSSMode::StaticRegisterNativesUYDebugMenuRootForSSMode()
	{
		UClass* Class = UYDebugMenuRootForSSMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAndRegistForSSModeDebugMenu", &UYDebugMenuRootForSSMode::execCreateAndRegistForSSModeDebugMenu },
			{ "CreateMenu", &UYDebugMenuRootForSSMode::execCreateMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics
	{
		struct YDebugMenuRootForSSMode_eventCreateAndRegistForSSModeDebugMenu_Parms
		{
			UYDebugMenuRootForSSMode* _pcInst;
			FString _strRegistKey;
			UELDebugMenuManager* _pcELDebugMenuMaanger;
			TArray<FELDebugMenuShortcutKeySettings> _cShortcuts;
			TArray<FELDebugMenuShortcutKeySettings> _cCloseShortcuts;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcELDebugMenuMaanger;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cShortcuts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cShortcuts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cShortcuts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cCloseShortcuts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cCloseShortcuts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cCloseShortcuts;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootForSSMode_eventCreateAndRegistForSSModeDebugMenu_Parms, _pcInst), Z_Construct_UClass_UYDebugMenuRootForSSMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootForSSMode_eventCreateAndRegistForSSModeDebugMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__pcELDebugMenuMaanger = { "_pcELDebugMenuMaanger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootForSSMode_eventCreateAndRegistForSSModeDebugMenu_Parms, _pcELDebugMenuMaanger), Z_Construct_UClass_UELDebugMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cShortcuts_Inner = { "_cShortcuts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cShortcuts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cShortcuts = { "_cShortcuts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootForSSMode_eventCreateAndRegistForSSModeDebugMenu_Parms, _cShortcuts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cShortcuts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cShortcuts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cCloseShortcuts_Inner = { "_cCloseShortcuts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cCloseShortcuts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cCloseShortcuts = { "_cCloseShortcuts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootForSSMode_eventCreateAndRegistForSSModeDebugMenu_Parms, _cCloseShortcuts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cCloseShortcuts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cCloseShortcuts_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootForSSMode_eventCreateAndRegistForSSModeDebugMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootForSSMode_eventCreateAndRegistForSSModeDebugMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__pcELDebugMenuMaanger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cShortcuts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cShortcuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cCloseShortcuts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp__cCloseShortcuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootForSSMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootForSSMode, nullptr, "CreateAndRegistForSSModeDebugMenu", nullptr, nullptr, sizeof(YDebugMenuRootForSSMode_eventCreateAndRegistForSSModeDebugMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics
	{
		struct YDebugMenuRootForSSMode_eventCreateMenu_Parms
		{
			FYDebugMenuParamForSSMode _stParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::NewProp__stParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::NewProp__stParam = { "_stParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootForSSMode_eventCreateMenu_Parms, _stParam), Z_Construct_UScriptStruct_FYDebugMenuParamForSSMode, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::NewProp__stParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::NewProp__stParam_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootForSSMode_eventCreateMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootForSSMode_eventCreateMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::NewProp__stParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootForSSMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootForSSMode, nullptr, "CreateMenu", nullptr, nullptr, sizeof(YDebugMenuRootForSSMode_eventCreateMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDebugMenuRootForSSMode_NoRegister()
	{
		return UYDebugMenuRootForSSMode::StaticClass();
	}
	struct Z_Construct_UClass_UYDebugMenuRootForSSMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDebugMenuRootForSSMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSInGameDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDebugMenuRootForSSMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateAndRegistForSSModeDebugMenu, "CreateAndRegistForSSModeDebugMenu" }, // 3109883738
		{ &Z_Construct_UFunction_UYDebugMenuRootForSSMode_CreateMenu, "CreateMenu" }, // 4210757818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuRootForSSMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDebugMenuRootForSSMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuRootForSSMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDebugMenuRootForSSMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDebugMenuRootForSSMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDebugMenuRootForSSMode_Statics::ClassParams = {
		&UYDebugMenuRootForSSMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuRootForSSMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuRootForSSMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDebugMenuRootForSSMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDebugMenuRootForSSMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDebugMenuRootForSSMode, 2211545490);
	template<> ABP_200508_API UClass* StaticClass<UYDebugMenuRootForSSMode>()
	{
		return UYDebugMenuRootForSSMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDebugMenuRootForSSMode(Z_Construct_UClass_UYDebugMenuRootForSSMode, &UYDebugMenuRootForSSMode::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYDebugMenuRootForSSMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDebugMenuRootForSSMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
