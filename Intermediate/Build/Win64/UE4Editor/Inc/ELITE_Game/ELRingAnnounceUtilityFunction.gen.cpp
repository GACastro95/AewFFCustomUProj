// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELRingAnnounceUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELRingAnnounceUtilityFunction() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELRingAnnounceUtilityFunction_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELRingAnnounceUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERingAnnounceTable();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELRingAnnounceUtilityFunction::execGetAtomCue)
	{
		P_GET_ENUM(ERingAnnounceTable,Z_Param_Kind);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_GET_PROPERTY(FNameProperty,Z_Param_CueName);
		P_GET_PROPERTY(FIntProperty,Z_Param_CueNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=UELRingAnnounceUtilityFunction::GetAtomCue(ERingAnnounceTable(Z_Param_Kind),Z_Param_RowName,Z_Param_CueName,Z_Param_CueNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELRingAnnounceUtilityFunction::execGetRAAtomCue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__CueId);
		P_GET_PROPERTY(FStrProperty,Z_Param__CueName);
		P_GET_ENUM(ERingAnnounceTable,Z_Param__tableNo);
		P_GET_PROPERTY(FIntProperty,Z_Param_CueNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=UELRingAnnounceUtilityFunction::GetRAAtomCue(Z_Param__CueId,Z_Param__CueName,ERingAnnounceTable(Z_Param__tableNo),Z_Param_CueNo);
		P_NATIVE_END;
	}
	void UELRingAnnounceUtilityFunction::StaticRegisterNativesUELRingAnnounceUtilityFunction()
	{
		UClass* Class = UELRingAnnounceUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAtomCue", &UELRingAnnounceUtilityFunction::execGetAtomCue },
			{ "GetRAAtomCue", &UELRingAnnounceUtilityFunction::execGetRAAtomCue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics
	{
		struct ELRingAnnounceUtilityFunction_eventGetAtomCue_Parms
		{
			ERingAnnounceTable Kind;
			FName RowName;
			FName CueName;
			int32 CueNo;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CueNo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingAnnounceUtilityFunction_eventGetAtomCue_Parms, Kind), Z_Construct_UEnum_ELITE_Game_ERingAnnounceTable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingAnnounceUtilityFunction_eventGetAtomCue_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_RowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingAnnounceUtilityFunction_eventGetAtomCue_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_CueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_CueNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_CueNo = { "CueNo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingAnnounceUtilityFunction_eventGetAtomCue_Parms, CueNo), METADATA_PARAMS(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_CueNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_CueNo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingAnnounceUtilityFunction_eventGetAtomCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_CueNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELRingAnnounceUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELRingAnnounceUtilityFunction, nullptr, "GetAtomCue", nullptr, nullptr, sizeof(ELRingAnnounceUtilityFunction_eventGetAtomCue_Parms), Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics
	{
		struct ELRingAnnounceUtilityFunction_eventGetRAAtomCue_Parms
		{
			FString _CueId;
			FString _CueName;
			ERingAnnounceTable _tableNo;
			int32 CueNo;
			USoundAtomCue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__CueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__CueId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__CueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__CueName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__tableNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__tableNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CueNo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__CueId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__CueId = { "_CueId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingAnnounceUtilityFunction_eventGetRAAtomCue_Parms, _CueId), METADATA_PARAMS(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__CueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__CueId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__CueName = { "_CueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingAnnounceUtilityFunction_eventGetRAAtomCue_Parms, _CueName), METADATA_PARAMS(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__CueName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__tableNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__tableNo = { "_tableNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingAnnounceUtilityFunction_eventGetRAAtomCue_Parms, _tableNo), Z_Construct_UEnum_ELITE_Game_ERingAnnounceTable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp_CueNo = { "CueNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingAnnounceUtilityFunction_eventGetRAAtomCue_Parms, CueNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingAnnounceUtilityFunction_eventGetRAAtomCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__CueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__tableNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp__tableNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp_CueNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELRingAnnounceUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELRingAnnounceUtilityFunction, nullptr, "GetRAAtomCue", nullptr, nullptr, sizeof(ELRingAnnounceUtilityFunction_eventGetRAAtomCue_Parms), Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELRingAnnounceUtilityFunction_NoRegister()
	{
		return UELRingAnnounceUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELRingAnnounceUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELRingAnnounceUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELRingAnnounceUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetAtomCue, "GetAtomCue" }, // 3407644983
		{ &Z_Construct_UFunction_UELRingAnnounceUtilityFunction_GetRAAtomCue, "GetRAAtomCue" }, // 2185351883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELRingAnnounceUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELRingAnnounceUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELRingAnnounceUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELRingAnnounceUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELRingAnnounceUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELRingAnnounceUtilityFunction_Statics::ClassParams = {
		&UELRingAnnounceUtilityFunction::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELRingAnnounceUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELRingAnnounceUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELRingAnnounceUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELRingAnnounceUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELRingAnnounceUtilityFunction, 2951302815);
	template<> ELITE_GAME_API UClass* StaticClass<UELRingAnnounceUtilityFunction>()
	{
		return UELRingAnnounceUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELRingAnnounceUtilityFunction(Z_Construct_UClass_UELRingAnnounceUtilityFunction, &UELRingAnnounceUtilityFunction::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELRingAnnounceUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELRingAnnounceUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
