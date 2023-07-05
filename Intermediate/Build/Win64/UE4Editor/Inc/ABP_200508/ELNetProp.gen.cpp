// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetProp() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELNetProp_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELNetProp();
	ABP_200508_API UClass* Z_Construct_UClass_AELNetActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELNetCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStWeaponSystemMotion();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELNetProp::execGetNetOwnerCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELNetCharacter**)Z_Param__Result=P_THIS->GetNetOwnerCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetProp::execIsAttached_N)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Chara);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttached_N(Z_Param_Chara);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetProp::execSetNetOwnerCharacter)
	{
		P_GET_OBJECT(AELNetCharacter,Z_Param_NewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNetOwnerCharacter(Z_Param_NewOwner);
		P_NATIVE_END;
	}
	void AELNetProp::StaticRegisterNativesAELNetProp()
	{
		UClass* Class = AELNetProp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNetOwnerCharacter", &AELNetProp::execGetNetOwnerCharacter },
			{ "IsAttached_N", &AELNetProp::execIsAttached_N },
			{ "SetNetOwnerCharacter", &AELNetProp::execSetNetOwnerCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter_Statics
	{
		struct ELNetProp_eventGetNetOwnerCharacter_Parms
		{
			AELNetCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetProp_eventGetNetOwnerCharacter_Parms, ReturnValue), Z_Construct_UClass_AELNetCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetProp, nullptr, "GetNetOwnerCharacter", nullptr, nullptr, sizeof(ELNetProp_eventGetNetOwnerCharacter_Parms), Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics
	{
		struct ELNetProp_eventIsAttached_N_Parms
		{
			const ACharacter* Chara;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chara_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chara;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::NewProp_Chara_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::NewProp_Chara = { "Chara", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetProp_eventIsAttached_N_Parms, Chara), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::NewProp_Chara_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::NewProp_Chara_MetaData)) };
	void Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetProp_eventIsAttached_N_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetProp_eventIsAttached_N_Parms), &Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::NewProp_Chara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetProp, nullptr, "IsAttached_N", nullptr, nullptr, sizeof(ELNetProp_eventIsAttached_N_Parms), Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetProp_IsAttached_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetProp_IsAttached_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter_Statics
	{
		struct ELNetProp_eventSetNetOwnerCharacter_Parms
		{
			AELNetCharacter* NewOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetProp_eventSetNetOwnerCharacter_Parms, NewOwner), Z_Construct_UClass_AELNetCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter_Statics::NewProp_NewOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetProp, nullptr, "SetNetOwnerCharacter", nullptr, nullptr, sizeof(ELNetProp_eventSetNetOwnerCharacter_Parms), Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELNetProp_NoRegister()
	{
		return AELNetProp::StaticClass();
	}
	struct Z_Construct_UClass_AELNetProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetOwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetOwnerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemMotion_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SystemMotion_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachChara_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachChara_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrierCapsuleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BarrierCapsuleOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageList_BlockPose_N_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageList_BlockPose_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MontageList_BlockPose_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELNetProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELNetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELNetProp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELNetProp_GetNetOwnerCharacter, "GetNetOwnerCharacter" }, // 2248931311
		{ &Z_Construct_UFunction_AELNetProp_IsAttached_N, "IsAttached_N" }, // 586468281
		{ &Z_Construct_UFunction_AELNetProp_SetNetOwnerCharacter, "SetNetOwnerCharacter" }, // 2147008436
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetProp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELNetProp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNetProp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetProp_Statics::NewProp_NetOwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetProp" },
		{ "ModuleRelativePath", "Public/ELNetProp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELNetProp_Statics::NewProp_NetOwnerCharacter = { "NetOwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetProp, NetOwnerCharacter), Z_Construct_UClass_AELNetCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELNetProp_Statics::NewProp_NetOwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetProp_Statics::NewProp_NetOwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetProp_Statics::NewProp_SystemMotion_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetProp" },
		{ "ModuleRelativePath", "Public/ELNetProp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELNetProp_Statics::NewProp_SystemMotion_N = { "SystemMotion_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetProp, SystemMotion_N), Z_Construct_UScriptStruct_FStWeaponSystemMotion, METADATA_PARAMS(Z_Construct_UClass_AELNetProp_Statics::NewProp_SystemMotion_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetProp_Statics::NewProp_SystemMotion_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetProp_Statics::NewProp_AttachChara_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetProp" },
		{ "ModuleRelativePath", "Public/ELNetProp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELNetProp_Statics::NewProp_AttachChara_N = { "AttachChara_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetProp, AttachChara_N), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELNetProp_Statics::NewProp_AttachChara_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetProp_Statics::NewProp_AttachChara_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetProp_Statics::NewProp_BarrierCapsuleOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetProp" },
		{ "ModuleRelativePath", "Public/ELNetProp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELNetProp_Statics::NewProp_BarrierCapsuleOffset = { "BarrierCapsuleOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetProp, BarrierCapsuleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELNetProp_Statics::NewProp_BarrierCapsuleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetProp_Statics::NewProp_BarrierCapsuleOffset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELNetProp_Statics::NewProp_MontageList_BlockPose_N_Inner = { "MontageList_BlockPose_N", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetProp_Statics::NewProp_MontageList_BlockPose_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetProp" },
		{ "ModuleRelativePath", "Public/ELNetProp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELNetProp_Statics::NewProp_MontageList_BlockPose_N = { "MontageList_BlockPose_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetProp, MontageList_BlockPose_N), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELNetProp_Statics::NewProp_MontageList_BlockPose_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetProp_Statics::NewProp_MontageList_BlockPose_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELNetProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetProp_Statics::NewProp_NetOwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetProp_Statics::NewProp_SystemMotion_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetProp_Statics::NewProp_AttachChara_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetProp_Statics::NewProp_BarrierCapsuleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetProp_Statics::NewProp_MontageList_BlockPose_N_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetProp_Statics::NewProp_MontageList_BlockPose_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELNetProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELNetProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELNetProp_Statics::ClassParams = {
		&AELNetProp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELNetProp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELNetProp_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELNetProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELNetProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELNetProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELNetProp, 3838940766);
	template<> ABP_200508_API UClass* StaticClass<AELNetProp>()
	{
		return AELNetProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELNetProp(Z_Construct_UClass_AELNetProp, &AELNetProp::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELNetProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELNetProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
