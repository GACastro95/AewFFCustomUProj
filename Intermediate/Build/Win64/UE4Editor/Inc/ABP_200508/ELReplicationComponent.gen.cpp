// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELReplicationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELReplicationComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELReplicationComponent::execEnableTickFunctions)
	{
		P_GET_UBOOL(Z_Param_bRPC);
		P_GET_UBOOL(Z_Param_bReplication);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableTickFunctions(Z_Param_bRPC,Z_Param_bReplication);
		P_NATIVE_END;
	}
	void UELReplicationComponent::StaticRegisterNativesUELReplicationComponent()
	{
		UClass* Class = UELReplicationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableTickFunctions", &UELReplicationComponent::execEnableTickFunctions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics
	{
		struct ELReplicationComponent_eventEnableTickFunctions_Parms
		{
			bool bRPC;
			bool bReplication;
		};
		static void NewProp_bRPC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRPC;
		static void NewProp_bReplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplication;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::NewProp_bRPC_SetBit(void* Obj)
	{
		((ELReplicationComponent_eventEnableTickFunctions_Parms*)Obj)->bRPC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::NewProp_bRPC = { "bRPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationComponent_eventEnableTickFunctions_Parms), &Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::NewProp_bRPC_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::NewProp_bReplication_SetBit(void* Obj)
	{
		((ELReplicationComponent_eventEnableTickFunctions_Parms*)Obj)->bReplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::NewProp_bReplication = { "bReplication", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationComponent_eventEnableTickFunctions_Parms), &Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::NewProp_bReplication_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::NewProp_bRPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::NewProp_bReplication,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationComponent, nullptr, "EnableTickFunctions", nullptr, nullptr, sizeof(ELReplicationComponent_eventEnableTickFunctions_Parms), Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELReplicationComponent_NoRegister()
	{
		return UELReplicationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELReplicationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicationManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickRPC_MetaData[];
#endif
		static void NewProp_bTickRPC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickRPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickReplication_MetaData[];
#endif
		static void NewProp_bTickReplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickReplication;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELReplicationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELReplicationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELReplicationComponent_EnableTickFunctions, "EnableTickFunctions" }, // 4003806591
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELReplicationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELReplicationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_ReplicationManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationComponent" },
		{ "ModuleRelativePath", "Public/ELReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_ReplicationManager = { "ReplicationManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationComponent, ReplicationManager), Z_Construct_UClass_UELReplicationManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_ReplicationManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_ReplicationManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickRPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationComponent" },
		{ "ModuleRelativePath", "Public/ELReplicationComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickRPC_SetBit(void* Obj)
	{
		((UELReplicationComponent*)Obj)->bTickRPC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickRPC = { "bTickRPC", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELReplicationComponent), &Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickRPC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickRPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickRPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickReplication_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationComponent" },
		{ "ModuleRelativePath", "Public/ELReplicationComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickReplication_SetBit(void* Obj)
	{
		((UELReplicationComponent*)Obj)->bTickReplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickReplication = { "bTickReplication", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELReplicationComponent), &Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickReplication_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELReplicationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_ReplicationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickRPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationComponent_Statics::NewProp_bTickReplication,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELReplicationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELReplicationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELReplicationComponent_Statics::ClassParams = {
		&UELReplicationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELReplicationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELReplicationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELReplicationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELReplicationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELReplicationComponent, 2587674547);
	template<> ABP_200508_API UClass* StaticClass<UELReplicationComponent>()
	{
		return UELReplicationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELReplicationComponent(Z_Construct_UClass_UELReplicationComponent, &UELReplicationComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELReplicationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELReplicationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
