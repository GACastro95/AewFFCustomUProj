// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YDebugMenuRootForIngame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuRootForIngame() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYDebugMenuRootForIngame_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYDebugMenuRootForIngame();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuManager_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuParamForIngame();
// End Cross Module References
	DEFINE_FUNCTION(UYDebugMenuRootForIngame::execCreateAndRegistForIngameDebugMenu)
	{
		P_GET_OBJECT_REF(UYDebugMenuRootForIngame,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_GET_OBJECT(UELDebugMenuManager,Z_Param__pcELDebugMenuMaanger);
		P_GET_TARRAY_REF(FELDebugMenuShortcutKeySettings,Z_Param_Out__cShortcuts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuRootForIngame::CreateAndRegistForIngameDebugMenu(Z_Param_Out__pcInst,Z_Param__strRegistKey,Z_Param__pcELDebugMenuMaanger,Z_Param_Out__cShortcuts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuRootForIngame::execCreateMenu)
	{
		P_GET_STRUCT_REF(FYDebugMenuParamForIngame,Z_Param_Out__stParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateMenu(Z_Param_Out__stParam);
		P_NATIVE_END;
	}
	void UYDebugMenuRootForIngame::StaticRegisterNativesUYDebugMenuRootForIngame()
	{
		UClass* Class = UYDebugMenuRootForIngame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAndRegistForIngameDebugMenu", &UYDebugMenuRootForIngame::execCreateAndRegistForIngameDebugMenu },
			{ "CreateMenu", &UYDebugMenuRootForIngame::execCreateMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics
	{
		struct YDebugMenuRootForIngame_eventCreateAndRegistForIngameDebugMenu_Parms
		{
			UYDebugMenuRootForIngame* _pcInst;
			FString _strRegistKey;
			UELDebugMenuManager* _pcELDebugMenuMaanger;
			TArray<FELDebugMenuShortcutKeySettings> _cShortcuts;
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
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootForIngame_eventCreateAndRegistForIngameDebugMenu_Parms, _pcInst), Z_Construct_UClass_UYDebugMenuRootForIngame_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootForIngame_eventCreateAndRegistForIngameDebugMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__pcELDebugMenuMaanger = { "_pcELDebugMenuMaanger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootForIngame_eventCreateAndRegistForIngameDebugMenu_Parms, _pcELDebugMenuMaanger), Z_Construct_UClass_UELDebugMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__cShortcuts_Inner = { "_cShortcuts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__cShortcuts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__cShortcuts = { "_cShortcuts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootForIngame_eventCreateAndRegistForIngameDebugMenu_Parms, _cShortcuts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__cShortcuts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__cShortcuts_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootForIngame_eventCreateAndRegistForIngameDebugMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootForIngame_eventCreateAndRegistForIngameDebugMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__pcELDebugMenuMaanger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__cShortcuts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp__cShortcuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootForIngame, nullptr, "CreateAndRegistForIngameDebugMenu", nullptr, nullptr, sizeof(YDebugMenuRootForIngame_eventCreateAndRegistForIngameDebugMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics
	{
		struct YDebugMenuRootForIngame_eventCreateMenu_Parms
		{
			FYDebugMenuParamForIngame _stParam;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::NewProp__stParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::NewProp__stParam = { "_stParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuRootForIngame_eventCreateMenu_Parms, _stParam), Z_Construct_UScriptStruct_FYDebugMenuParamForIngame, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::NewProp__stParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::NewProp__stParam_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuRootForIngame_eventCreateMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuRootForIngame_eventCreateMenu_Parms), &Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::NewProp__stParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuRootForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuRootForIngame, nullptr, "CreateMenu", nullptr, nullptr, sizeof(YDebugMenuRootForIngame_eventCreateMenu_Parms), Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDebugMenuRootForIngame_NoRegister()
	{
		return UYDebugMenuRootForIngame::StaticClass();
	}
	struct Z_Construct_UClass_UYDebugMenuRootForIngame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDebugMenuRootForIngame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDebugMenuRootForIngame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateAndRegistForIngameDebugMenu, "CreateAndRegistForIngameDebugMenu" }, // 1154319848
		{ &Z_Construct_UFunction_UYDebugMenuRootForIngame_CreateMenu, "CreateMenu" }, // 3023641371
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuRootForIngame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDebugMenuRootForIngame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuRootForIngame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDebugMenuRootForIngame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDebugMenuRootForIngame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDebugMenuRootForIngame_Statics::ClassParams = {
		&UYDebugMenuRootForIngame::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuRootForIngame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuRootForIngame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDebugMenuRootForIngame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDebugMenuRootForIngame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDebugMenuRootForIngame, 1498773899);
	template<> ABP_200508_API UClass* StaticClass<UYDebugMenuRootForIngame>()
	{
		return UYDebugMenuRootForIngame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDebugMenuRootForIngame(Z_Construct_UClass_UYDebugMenuRootForIngame, &UYDebugMenuRootForIngame::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYDebugMenuRootForIngame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDebugMenuRootForIngame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
