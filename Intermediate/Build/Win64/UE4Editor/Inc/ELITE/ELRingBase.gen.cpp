// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELRingBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELRingBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_AELRingBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_AELRingBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELRingBase::execGetNearRope)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetNearRope(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	void AELRingBase::StaticRegisterNativesAELRingBase()
	{
		UClass* Class = AELRingBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNearRope", &AELRingBase::execGetNearRope },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELRingBase_GetNearRope_Statics
	{
		struct ELRingBase_eventGetNearRope_Parms
		{
			FVector Location;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingBase_eventGetNearRope_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRingBase_eventGetNearRope_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELRingBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELRingBase, nullptr, "GetNearRope", nullptr, nullptr, sizeof(ELRingBase_eventGetNearRope_Parms), Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELRingBase_GetNearRope()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELRingBase_GetNearRope_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELRingBase_NoRegister()
	{
		return AELRingBase::StaticClass();
	}
	struct Z_Construct_UClass_AELRingBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RopesList_N_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopesList_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RopesList_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELRingBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELRingBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELRingBase_GetNearRope, "GetNearRope" }, // 804666765
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELRingBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELRingBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELRingBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELRingBase_Statics::NewProp_RopesList_N_Inner = { "RopesList_N", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELRingBase_Statics::NewProp_RopesList_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRingBase" },
		{ "ModuleRelativePath", "Public/ELRingBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELRingBase_Statics::NewProp_RopesList_N = { "RopesList_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELRingBase, RopesList_N), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELRingBase_Statics::NewProp_RopesList_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELRingBase_Statics::NewProp_RopesList_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELRingBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELRingBase_Statics::NewProp_RopesList_N_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELRingBase_Statics::NewProp_RopesList_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELRingBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELRingBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELRingBase_Statics::ClassParams = {
		&AELRingBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELRingBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELRingBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELRingBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELRingBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELRingBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELRingBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELRingBase, 4136991966);
	template<> ELITE_API UClass* StaticClass<AELRingBase>()
	{
		return AELRingBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELRingBase(Z_Construct_UClass_AELRingBase, &AELRingBase::StaticClass, TEXT("/Script/ELITE"), TEXT("AELRingBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELRingBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
