// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSDamageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSDamageComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDamageComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDamageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDamageResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
// End Cross Module References
	DEFINE_FUNCTION(UELSSDamageComponent::execGetBlowVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetBlowVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSDamageComponent::execSetBlowVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_inVec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlowVector(Z_Param_Out_inVec);
		P_NATIVE_END;
	}
	void UELSSDamageComponent::StaticRegisterNativesUELSSDamageComponent()
	{
		UClass* Class = UELSSDamageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlowVector", &UELSSDamageComponent::execGetBlowVector },
			{ "SetBlowVector", &UELSSDamageComponent::execSetBlowVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector_Statics
	{
		struct ELSSDamageComponent_eventGetBlowVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDamageComponent_eventGetBlowVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSDamageComponent, nullptr, "GetBlowVector", nullptr, nullptr, sizeof(ELSSDamageComponent_eventGetBlowVector_Parms), Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics
	{
		struct ELSSDamageComponent_eventSetBlowVector_Parms
		{
			FVector inVec;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inVec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inVec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::NewProp_inVec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::NewProp_inVec = { "inVec", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDamageComponent_eventSetBlowVector_Parms, inVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::NewProp_inVec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::NewProp_inVec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::NewProp_inVec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSDamageComponent, nullptr, "SetBlowVector", nullptr, nullptr, sizeof(ELSSDamageComponent_eventSetBlowVector_Parms), Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSDamageComponent_NoRegister()
	{
		return UELSSDamageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELSSDamageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDamageResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastDamageResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastBlowVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastBlowVector;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitEffectLineTraceObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectLineTraceObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitEffectLineTraceObjectTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncHitHeightDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SyncHitHeightDiff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSDamageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSDamageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSDamageComponent_GetBlowVector, "GetBlowVector" }, // 4039044168
		{ &Z_Construct_UFunction_UELSSDamageComponent_SetBlowVector, "SetBlowVector" }, // 203974665
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDamageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELSSDamageComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSDamageComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_LastDamageResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDamageComponent" },
		{ "ModuleRelativePath", "Public/ELSSDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_LastDamageResult = { "LastDamageResult", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSDamageComponent, LastDamageResult), Z_Construct_UScriptStruct_FSSDamageResult, METADATA_PARAMS(Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_LastDamageResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_LastDamageResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_LastBlowVector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDamageComponent" },
		{ "ModuleRelativePath", "Public/ELSSDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_LastBlowVector = { "LastBlowVector", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSDamageComponent, LastBlowVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_LastBlowVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_LastBlowVector_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDamageComponent" },
		{ "ModuleRelativePath", "Public/ELSSDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_HitEffectLineTraceObjectTypes = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSDamageComponent, HitEffectLineTraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_SyncHitHeightDiff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDamageComponent" },
		{ "ModuleRelativePath", "Public/ELSSDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_SyncHitHeightDiff = { "SyncHitHeightDiff", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSDamageComponent, SyncHitHeightDiff), METADATA_PARAMS(Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_SyncHitHeightDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_SyncHitHeightDiff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSDamageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_LastDamageResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_LastBlowVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_HitEffectLineTraceObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDamageComponent_Statics::NewProp_SyncHitHeightDiff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSDamageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSDamageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSDamageComponent_Statics::ClassParams = {
		&UELSSDamageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSDamageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDamageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSDamageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDamageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSDamageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSDamageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSDamageComponent, 721422754);
	template<> ABP_200508_API UClass* StaticClass<UELSSDamageComponent>()
	{
		return UELSSDamageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSDamageComponent(Z_Construct_UClass_UELSSDamageComponent, &UELSSDamageComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSDamageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSDamageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
