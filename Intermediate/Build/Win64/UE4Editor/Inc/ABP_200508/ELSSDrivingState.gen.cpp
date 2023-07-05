// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSDrivingState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSDrivingState() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDrivingState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDrivingState();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSDrivingState::execRequestDamageMotion)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inCauserYaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestDamageMotion(Z_Param_inCauserYaw);
		P_NATIVE_END;
	}
	void UELSSDrivingState::StaticRegisterNativesUELSSDrivingState()
	{
		UClass* Class = UELSSDrivingState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestDamageMotion", &UELSSDrivingState::execRequestDamageMotion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion_Statics
	{
		struct ELSSDrivingState_eventRequestDamageMotion_Parms
		{
			float inCauserYaw;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inCauserYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion_Statics::NewProp_inCauserYaw = { "inCauserYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSDrivingState_eventRequestDamageMotion_Parms, inCauserYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion_Statics::NewProp_inCauserYaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDrivingState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSDrivingState, nullptr, "RequestDamageMotion", nullptr, nullptr, sizeof(ELSSDrivingState_eventRequestDamageMotion_Parms), Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSDrivingState_NoRegister()
	{
		return UELSSDrivingState::StaticClass();
	}
	struct Z_Construct_UClass_UELSSDrivingState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRequestedDamageMotion_MetaData[];
#endif
		static void NewProp_IsRequestedDamageMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRequestedDamageMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedDamageCauserYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequestedDamageCauserYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageDrivingPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageDrivingPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSDrivingState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSActionStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSDrivingState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSDrivingState_RequestDamageMotion, "RequestDamageMotion" }, // 1736203346
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDrivingState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSDrivingState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSDrivingState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_IsRequestedDamageMotion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDrivingState" },
		{ "ModuleRelativePath", "Public/ELSSDrivingState.h" },
	};
#endif
	void Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_IsRequestedDamageMotion_SetBit(void* Obj)
	{
		((UELSSDrivingState*)Obj)->IsRequestedDamageMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_IsRequestedDamageMotion = { "IsRequestedDamageMotion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSDrivingState), &Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_IsRequestedDamageMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_IsRequestedDamageMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_IsRequestedDamageMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_RequestedDamageCauserYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDrivingState" },
		{ "ModuleRelativePath", "Public/ELSSDrivingState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_RequestedDamageCauserYaw = { "RequestedDamageCauserYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSDrivingState, RequestedDamageCauserYaw), METADATA_PARAMS(Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_RequestedDamageCauserYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_RequestedDamageCauserYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_MontageDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDrivingState" },
		{ "ModuleRelativePath", "Public/ELSSDrivingState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_MontageDamage = { "MontageDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSDrivingState, MontageDamage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_MontageDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_MontageDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_MontageDrivingPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDrivingState" },
		{ "ModuleRelativePath", "Public/ELSSDrivingState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_MontageDrivingPose = { "MontageDrivingPose", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSDrivingState, MontageDrivingPose), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_MontageDrivingPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_MontageDrivingPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSDrivingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_IsRequestedDamageMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_RequestedDamageCauserYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_MontageDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDrivingState_Statics::NewProp_MontageDrivingPose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSDrivingState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSDrivingState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSDrivingState_Statics::ClassParams = {
		&UELSSDrivingState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSDrivingState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDrivingState_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSDrivingState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDrivingState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSDrivingState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSDrivingState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSDrivingState, 884555232);
	template<> ABP_200508_API UClass* StaticClass<UELSSDrivingState>()
	{
		return UELSSDrivingState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSDrivingState(Z_Construct_UClass_UELSSDrivingState, &UELSSDrivingState::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSDrivingState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSDrivingState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
