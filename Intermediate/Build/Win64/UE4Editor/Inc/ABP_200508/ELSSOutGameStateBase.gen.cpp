// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSOutGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSOutGameStateBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOutGameStateBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOutGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOutGameDatabase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSaveDataManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSOutGameStateBase::execGetOutGameDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSOutGameDatabase**)Z_Param__Result=P_THIS->GetOutGameDatabase();
		P_NATIVE_END;
	}
	static FName NAME_AELSSOutGameStateBase_OnScreenUpdateToBP = FName(TEXT("OnScreenUpdateToBP"));
	void AELSSOutGameStateBase::OnScreenUpdateToBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOutGameStateBase_OnScreenUpdateToBP),NULL);
	}
	void AELSSOutGameStateBase::StaticRegisterNativesAELSSOutGameStateBase()
	{
		UClass* Class = AELSSOutGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOutGameDatabase", &AELSSOutGameStateBase::execGetOutGameDatabase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase_Statics
	{
		struct ELSSOutGameStateBase_eventGetOutGameDatabase_Parms
		{
			AELSSOutGameDatabase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameStateBase_eventGetOutGameDatabase_Parms, ReturnValue), Z_Construct_UClass_AELSSOutGameDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameStateBase, nullptr, "GetOutGameDatabase", nullptr, nullptr, sizeof(ELSSOutGameStateBase_eventGetOutGameDatabase_Parms), Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOutGameStateBase_OnScreenUpdateToBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOutGameStateBase_OnScreenUpdateToBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOutGameStateBase_OnScreenUpdateToBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOutGameStateBase, nullptr, "OnScreenUpdateToBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOutGameStateBase_OnScreenUpdateToBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOutGameStateBase_OnScreenUpdateToBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOutGameStateBase_OnScreenUpdateToBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOutGameStateBase_OnScreenUpdateToBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSOutGameStateBase_NoRegister()
	{
		return AELSSOutGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSOutGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DatabaseType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Database_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Database;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SaveDataManagerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSOutGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSOutGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSOutGameStateBase_GetOutGameDatabase, "GetOutGameDatabase" }, // 3195045158
		{ &Z_Construct_UFunction_AELSSOutGameStateBase_OnScreenUpdateToBP, "OnScreenUpdateToBP" }, // 83708959
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELSSOutGameStateBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSOutGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_DatabaseType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameStateBase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_DatabaseType = { "DatabaseType", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameStateBase, DatabaseType), Z_Construct_UClass_AELSSOutGameDatabase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_DatabaseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_DatabaseType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_Database_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameStateBase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_Database = { "Database", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameStateBase, Database), Z_Construct_UClass_AELSSOutGameDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_Database_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_Database_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_SaveDataManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameStateBase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_SaveDataManager = { "SaveDataManager", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameStateBase, SaveDataManager), Z_Construct_UClass_AELSSSaveDataManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_SaveDataManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_SaveDataManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_SaveDataManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOutGameStateBase" },
		{ "ModuleRelativePath", "Public/ELSSOutGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_SaveDataManagerClass = { "SaveDataManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOutGameStateBase, SaveDataManagerClass), Z_Construct_UClass_AELSSSaveDataManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_SaveDataManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_SaveDataManagerClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSOutGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_DatabaseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_Database,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_SaveDataManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOutGameStateBase_Statics::NewProp_SaveDataManagerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSOutGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSOutGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSOutGameStateBase_Statics::ClassParams = {
		&AELSSOutGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSOutGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSOutGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOutGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSOutGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSOutGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSOutGameStateBase, 255816267);
	template<> ABP_200508_API UClass* StaticClass<AELSSOutGameStateBase>()
	{
		return AELSSOutGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSOutGameStateBase(Z_Construct_UClass_AELSSOutGameStateBase, &AELSSOutGameStateBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSOutGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSOutGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
