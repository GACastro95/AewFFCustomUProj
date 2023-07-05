// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLocalizeFontManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLocalizeFontManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELLocalizeFontManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLocalizeFontManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELLocalizeFontManager::execGetCurrentLanguageFont)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(UFont,Z_Param_BaseFont);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFont**)Z_Param__Result=P_THIS->GetCurrentLanguageFont(Z_Param__pWorldContextObject,Z_Param_BaseFont);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLocalizeFontManager::execSetDataTable)
	{
		P_GET_OBJECT(UDataTable,Z_Param_FontDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataTable(Z_Param_FontDataTable);
		P_NATIVE_END;
	}
	void UELLocalizeFontManager::StaticRegisterNativesUELLocalizeFontManager()
	{
		UClass* Class = UELLocalizeFontManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentLanguageFont", &UELLocalizeFontManager::execGetCurrentLanguageFont },
			{ "SetDataTable", &UELLocalizeFontManager::execSetDataTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics
	{
		struct ELLocalizeFontManager_eventGetCurrentLanguageFont_Parms
		{
			UObject* _pWorldContextObject;
			const UFont* BaseFont;
			UFont* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseFont;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLocalizeFontManager_eventGetCurrentLanguageFont_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::NewProp_BaseFont_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::NewProp_BaseFont = { "BaseFont", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLocalizeFontManager_eventGetCurrentLanguageFont_Parms, BaseFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::NewProp_BaseFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::NewProp_BaseFont_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLocalizeFontManager_eventGetCurrentLanguageFont_Parms, ReturnValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::NewProp_BaseFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLocalizeFontManager.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLocalizeFontManager, nullptr, "GetCurrentLanguageFont", nullptr, nullptr, sizeof(ELLocalizeFontManager_eventGetCurrentLanguageFont_Parms), Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable_Statics
	{
		struct ELLocalizeFontManager_eventSetDataTable_Parms
		{
			UDataTable* FontDataTable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable_Statics::NewProp_FontDataTable = { "FontDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLocalizeFontManager_eventSetDataTable_Parms, FontDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable_Statics::NewProp_FontDataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLocalizeFontManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLocalizeFontManager, nullptr, "SetDataTable", nullptr, nullptr, sizeof(ELLocalizeFontManager_eventSetDataTable_Parms), Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELLocalizeFontManager_NoRegister()
	{
		return UELLocalizeFontManager::StaticClass();
	}
	struct Z_Construct_UClass_UELLocalizeFontManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fontParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_fontParamTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELLocalizeFontManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELLocalizeFontManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELLocalizeFontManager_GetCurrentLanguageFont, "GetCurrentLanguageFont" }, // 217971497
		{ &Z_Construct_UFunction_UELLocalizeFontManager_SetDataTable, "SetDataTable" }, // 3555579166
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLocalizeFontManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLocalizeFontManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLocalizeFontManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLocalizeFontManager_Statics::NewProp_m_fontParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLocalizeFontManager" },
		{ "ModuleRelativePath", "Public/ELLocalizeFontManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELLocalizeFontManager_Statics::NewProp_m_fontParamTable = { "m_fontParamTable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLocalizeFontManager, m_fontParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELLocalizeFontManager_Statics::NewProp_m_fontParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLocalizeFontManager_Statics::NewProp_m_fontParamTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELLocalizeFontManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLocalizeFontManager_Statics::NewProp_m_fontParamTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELLocalizeFontManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELLocalizeFontManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELLocalizeFontManager_Statics::ClassParams = {
		&UELLocalizeFontManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELLocalizeFontManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELLocalizeFontManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELLocalizeFontManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELLocalizeFontManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELLocalizeFontManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELLocalizeFontManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELLocalizeFontManager, 3265097876);
	template<> ABP_200508_API UClass* StaticClass<UELLocalizeFontManager>()
	{
		return UELLocalizeFontManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELLocalizeFontManager(Z_Construct_UClass_UELLocalizeFontManager, &UELLocalizeFontManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELLocalizeFontManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELLocalizeFontManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
