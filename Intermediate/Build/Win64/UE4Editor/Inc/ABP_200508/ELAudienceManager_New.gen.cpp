// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAudienceManager_New.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAudienceManager_New() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELAudienceManager_New_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELAudienceManager_New();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELAudienceManager_New::execDestroyAudience_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyAudience_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELAudienceManager_New::execListupAudience)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListupAudience();
		P_NATIVE_END;
	}
	static FName NAME_AELAudienceManager_New_Tick_UpdateCrowd_N = FName(TEXT("Tick_UpdateCrowd_N"));
	void AELAudienceManager_New::Tick_UpdateCrowd_N(const float DeltaSeconds)
	{
		ELAudienceManager_New_eventTick_UpdateCrowd_N_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AELAudienceManager_New_Tick_UpdateCrowd_N),&Parms);
	}
	void AELAudienceManager_New::StaticRegisterNativesAELAudienceManager_New()
	{
		UClass* Class = AELAudienceManager_New::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyAudience_N", &AELAudienceManager_New::execDestroyAudience_N },
			{ "ListupAudience", &AELAudienceManager_New::execListupAudience },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELAudienceManager_New_DestroyAudience_N_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELAudienceManager_New_DestroyAudience_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAudienceManager_New.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELAudienceManager_New_DestroyAudience_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELAudienceManager_New, nullptr, "DestroyAudience_N", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELAudienceManager_New_DestroyAudience_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELAudienceManager_New_DestroyAudience_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELAudienceManager_New_DestroyAudience_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELAudienceManager_New_DestroyAudience_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELAudienceManager_New_ListupAudience_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELAudienceManager_New_ListupAudience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAudienceManager_New.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELAudienceManager_New_ListupAudience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELAudienceManager_New, nullptr, "ListupAudience", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELAudienceManager_New_ListupAudience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELAudienceManager_New_ListupAudience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELAudienceManager_New_ListupAudience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELAudienceManager_New_ListupAudience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAudienceManager_New_eventTick_UpdateCrowd_N_Parms, DeltaSeconds), METADATA_PARAMS(Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::NewProp_DeltaSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAudienceManager_New.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELAudienceManager_New, nullptr, "Tick_UpdateCrowd_N", nullptr, nullptr, sizeof(ELAudienceManager_New_eventTick_UpdateCrowd_N_Parms), Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELAudienceManager_New_NoRegister()
	{
		return AELAudienceManager_New::StaticClass();
	}
	struct Z_Construct_UClass_AELAudienceManager_New_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudienceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudienceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudienceArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardAudienceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardAudienceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BillboardAudienceArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WiseAudienceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WiseAudienceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WiseAudienceArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequestDestroy_N_MetaData[];
#endif
		static void NewProp_bRequestDestroy_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequestDestroy_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyed_N_MetaData[];
#endif
		static void NewProp_bDestroyed_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyed_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELAudienceManager_New_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELAudienceManager_New_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELAudienceManager_New_DestroyAudience_N, "DestroyAudience_N" }, // 3389241110
		{ &Z_Construct_UFunction_AELAudienceManager_New_ListupAudience, "ListupAudience" }, // 4020173069
		{ &Z_Construct_UFunction_AELAudienceManager_New_Tick_UpdateCrowd_N, "Tick_UpdateCrowd_N" }, // 1383760066
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudienceManager_New_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELAudienceManager_New.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAudienceManager_New.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_AudienceArray_Inner = { "AudienceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_AudienceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAudienceManager_New" },
		{ "ModuleRelativePath", "Public/ELAudienceManager_New.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_AudienceArray = { "AudienceArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELAudienceManager_New, AudienceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_AudienceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_AudienceArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_BillboardAudienceArray_Inner = { "BillboardAudienceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_BillboardAudienceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAudienceManager_New" },
		{ "ModuleRelativePath", "Public/ELAudienceManager_New.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_BillboardAudienceArray = { "BillboardAudienceArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELAudienceManager_New, BillboardAudienceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_BillboardAudienceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_BillboardAudienceArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_WiseAudienceArray_Inner = { "WiseAudienceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_WiseAudienceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAudienceManager_New" },
		{ "ModuleRelativePath", "Public/ELAudienceManager_New.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_WiseAudienceArray = { "WiseAudienceArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELAudienceManager_New, WiseAudienceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_WiseAudienceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_WiseAudienceArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_UpdateIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAudienceManager_New" },
		{ "ModuleRelativePath", "Public/ELAudienceManager_New.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_UpdateIndex = { "UpdateIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELAudienceManager_New, UpdateIndex), METADATA_PARAMS(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_UpdateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_UpdateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bRequestDestroy_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAudienceManager_New" },
		{ "ModuleRelativePath", "Public/ELAudienceManager_New.h" },
	};
#endif
	void Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bRequestDestroy_N_SetBit(void* Obj)
	{
		((AELAudienceManager_New*)Obj)->bRequestDestroy_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bRequestDestroy_N = { "bRequestDestroy_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELAudienceManager_New), &Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bRequestDestroy_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bRequestDestroy_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bRequestDestroy_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bDestroyed_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAudienceManager_New" },
		{ "ModuleRelativePath", "Public/ELAudienceManager_New.h" },
	};
#endif
	void Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bDestroyed_N_SetBit(void* Obj)
	{
		((AELAudienceManager_New*)Obj)->bDestroyed_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bDestroyed_N = { "bDestroyed_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELAudienceManager_New), &Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bDestroyed_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bDestroyed_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bDestroyed_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELAudienceManager_New_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_AudienceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_AudienceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_BillboardAudienceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_BillboardAudienceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_WiseAudienceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_WiseAudienceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_UpdateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bRequestDestroy_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELAudienceManager_New_Statics::NewProp_bDestroyed_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELAudienceManager_New_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELAudienceManager_New>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELAudienceManager_New_Statics::ClassParams = {
		&AELAudienceManager_New::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELAudienceManager_New_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELAudienceManager_New_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELAudienceManager_New_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELAudienceManager_New_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELAudienceManager_New()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELAudienceManager_New_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELAudienceManager_New, 2224009099);
	template<> ABP_200508_API UClass* StaticClass<AELAudienceManager_New>()
	{
		return AELAudienceManager_New::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELAudienceManager_New(Z_Construct_UClass_AELAudienceManager_New, &AELAudienceManager_New::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELAudienceManager_New"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELAudienceManager_New);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
