// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_UGC_Wrestler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_UGC_Wrestler() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_UGC_Wrestler_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_UGC_Wrestler();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCustomRosterRaw();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditWrestlerRaw();
// End Cross Module References
	DEFINE_FUNCTION(USaveData_UGC_Wrestler::execGetRosterNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint32*)Z_Param__Result=P_THIS->GetRosterNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_UGC_Wrestler::execGetScoutNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint32*)Z_Param__Result=P_THIS->GetScoutNum();
		P_NATIVE_END;
	}
	void USaveData_UGC_Wrestler::StaticRegisterNativesUSaveData_UGC_Wrestler()
	{
		UClass* Class = USaveData_UGC_Wrestler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRosterNum", &USaveData_UGC_Wrestler::execGetRosterNum },
			{ "GetScoutNum", &USaveData_UGC_Wrestler::execGetScoutNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum_Statics
	{
		struct SaveData_UGC_Wrestler_eventGetRosterNum_Parms
		{
			uint32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_UGC_Wrestler_eventGetRosterNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_UGC_Wrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_UGC_Wrestler, nullptr, "GetRosterNum", nullptr, nullptr, sizeof(SaveData_UGC_Wrestler_eventGetRosterNum_Parms), Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum_Statics
	{
		struct SaveData_UGC_Wrestler_eventGetScoutNum_Parms
		{
			uint32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_UGC_Wrestler_eventGetScoutNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_UGC_Wrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_UGC_Wrestler, nullptr, "GetScoutNum", nullptr, nullptr, sizeof(SaveData_UGC_Wrestler_eventGetScoutNum_Parms), Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveData_UGC_Wrestler_NoRegister()
	{
		return USaveData_UGC_Wrestler::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_UGC_Wrestler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rosters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rosters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rosters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scouts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scouts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scouts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveGameBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveData_UGC_Wrestler_GetRosterNum, "GetRosterNum" }, // 4200144826
		{ &Z_Construct_UFunction_USaveData_UGC_Wrestler_GetScoutNum, "GetScoutNum" }, // 356725387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_UGC_Wrestler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_UGC_Wrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Rosters_Inner = { "Rosters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomRosterRaw, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Rosters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_UGC_Wrestler" },
		{ "ModuleRelativePath", "Public/SaveData_UGC_Wrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Rosters = { "Rosters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_UGC_Wrestler, Rosters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Rosters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Rosters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Scouts_Inner = { "Scouts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditWrestlerRaw, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Scouts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_UGC_Wrestler" },
		{ "ModuleRelativePath", "Public/SaveData_UGC_Wrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Scouts = { "Scouts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_UGC_Wrestler, Scouts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Scouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Scouts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Rosters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Rosters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Scouts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::NewProp_Scouts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_UGC_Wrestler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::ClassParams = {
		&USaveData_UGC_Wrestler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_UGC_Wrestler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_UGC_Wrestler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_UGC_Wrestler, 9295903);
	template<> ABP_200508_API UClass* StaticClass<USaveData_UGC_Wrestler>()
	{
		return USaveData_UGC_Wrestler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_UGC_Wrestler(Z_Construct_UClass_USaveData_UGC_Wrestler, &USaveData_UGC_Wrestler::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_UGC_Wrestler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_UGC_Wrestler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
