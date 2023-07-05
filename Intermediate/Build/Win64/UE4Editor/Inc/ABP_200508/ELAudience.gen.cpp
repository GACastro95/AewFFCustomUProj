// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAudience.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAudience() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELAudience_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELAudience();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EAudienceAnimationSharingType();
// End Cross Module References
	DEFINE_FUNCTION(AELAudience::execGetTickInterval)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTickInterval();
		P_NATIVE_END;
	}
	void AELAudience::StaticRegisterNativesAELAudience()
	{
		UClass* Class = AELAudience::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTickInterval", &AELAudience::execGetTickInterval },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELAudience_GetTickInterval_Statics
	{
		struct ELAudience_eventGetTickInterval_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELAudience_GetTickInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAudience_eventGetTickInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELAudience_GetTickInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELAudience_GetTickInterval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELAudience_GetTickInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAudience.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELAudience_GetTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELAudience, nullptr, "GetTickInterval", nullptr, nullptr, sizeof(ELAudience_eventGetTickInterval_Parms), Z_Construct_UFunction_AELAudience_GetTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELAudience_GetTickInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELAudience_GetTickInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELAudience_GetTickInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELAudience_GetTickInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELAudience_GetTickInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELAudience_NoRegister()
	{
		return AELAudience::StaticClass();
	}
	struct Z_Construct_UClass_AELAudience_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformTickInterval_00_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformTickInterval_00;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformTickInterval_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformTickInterval_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformTickInterval_02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformTickInterval_02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformTickInterval_03_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformTickInterval_03;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimationSharingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSharingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimationSharingType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELAudience_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASkeletalMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELAudience_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELAudience_GetTickInterval, "GetTickInterval" }, // 2895982792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudience_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELAudience.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAudience.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_00_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAudience" },
		{ "ModuleRelativePath", "Public/ELAudience.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_00 = { "PlatformTickInterval_00", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELAudience, PlatformTickInterval_00), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_00_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_00_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAudience" },
		{ "ModuleRelativePath", "Public/ELAudience.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_01 = { "PlatformTickInterval_01", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELAudience, PlatformTickInterval_01), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAudience" },
		{ "ModuleRelativePath", "Public/ELAudience.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_02 = { "PlatformTickInterval_02", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELAudience, PlatformTickInterval_02), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_02_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_03_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAudience" },
		{ "ModuleRelativePath", "Public/ELAudience.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_03 = { "PlatformTickInterval_03", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELAudience, PlatformTickInterval_03), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_03_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_03_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELAudience_Statics::NewProp_AnimationSharingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudience_Statics::NewProp_AnimationSharingType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAudience" },
		{ "ModuleRelativePath", "Public/ELAudience.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELAudience_Statics::NewProp_AnimationSharingType = { "AnimationSharingType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELAudience, AnimationSharingType), Z_Construct_UEnum_ABP_200508_EAudienceAnimationSharingType, METADATA_PARAMS(Z_Construct_UClass_AELAudience_Statics::NewProp_AnimationSharingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudience_Statics::NewProp_AnimationSharingType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELAudience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_00,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudience_Statics::NewProp_PlatformTickInterval_03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudience_Statics::NewProp_AnimationSharingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudience_Statics::NewProp_AnimationSharingType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELAudience_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELAudience>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELAudience_Statics::ClassParams = {
		&AELAudience::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELAudience_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELAudience_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELAudience_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudience_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELAudience()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELAudience_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELAudience, 3461284131);
	template<> ABP_200508_API UClass* StaticClass<AELAudience>()
	{
		return AELAudience::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELAudience(Z_Construct_UClass_AELAudience, &AELAudience::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELAudience"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELAudience);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
