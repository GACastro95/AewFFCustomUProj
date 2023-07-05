// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/RibbonBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRibbonBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ARibbonBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ARibbonBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARibbonBase::execStartPhysicsSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPhysicsSimulation();
		P_NATIVE_END;
	}
	void ARibbonBase::StaticRegisterNativesARibbonBase()
	{
		UClass* Class = ARibbonBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartPhysicsSimulation", &ARibbonBase::execStartPhysicsSimulation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARibbonBase_StartPhysicsSimulation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARibbonBase_StartPhysicsSimulation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RibbonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARibbonBase_StartPhysicsSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARibbonBase, nullptr, "StartPhysicsSimulation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARibbonBase_StartPhysicsSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARibbonBase_StartPhysicsSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARibbonBase_StartPhysicsSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARibbonBase_StartPhysicsSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARibbonBase_NoRegister()
	{
		return ARibbonBase::StaticClass();
	}
	struct Z_Construct_UClass_ARibbonBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysics_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulatedPhysics_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimulatedPhysics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARibbonBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARibbonBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARibbonBase_StartPhysicsSimulation, "StartPhysicsSimulation" }, // 3912689384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARibbonBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RibbonBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RibbonBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARibbonBase_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RibbonBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RibbonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARibbonBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARibbonBase, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARibbonBase_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARibbonBase_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARibbonBase_Statics::NewProp_DefaultPhysics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RibbonBase" },
		{ "ModuleRelativePath", "Public/RibbonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARibbonBase_Statics::NewProp_DefaultPhysics = { "DefaultPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARibbonBase, DefaultPhysics), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARibbonBase_Statics::NewProp_DefaultPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARibbonBase_Statics::NewProp_DefaultPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARibbonBase_Statics::NewProp_SimulatedPhysics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RibbonBase" },
		{ "ModuleRelativePath", "Public/RibbonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARibbonBase_Statics::NewProp_SimulatedPhysics = { "SimulatedPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARibbonBase, SimulatedPhysics), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARibbonBase_Statics::NewProp_SimulatedPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARibbonBase_Statics::NewProp_SimulatedPhysics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARibbonBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARibbonBase_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARibbonBase_Statics::NewProp_DefaultPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARibbonBase_Statics::NewProp_SimulatedPhysics,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARibbonBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARibbonBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARibbonBase_Statics::ClassParams = {
		&ARibbonBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARibbonBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARibbonBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARibbonBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARibbonBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARibbonBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARibbonBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARibbonBase, 1739615641);
	template<> ABP_200508_API UClass* StaticClass<ARibbonBase>()
	{
		return ARibbonBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARibbonBase(Z_Construct_UClass_ARibbonBase, &ARibbonBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ARibbonBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARibbonBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
