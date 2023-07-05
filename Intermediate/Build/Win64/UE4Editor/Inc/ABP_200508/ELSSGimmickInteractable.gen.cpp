// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGimmickInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGimmickInteractable() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickInteractable_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickInteractable();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSGimmickInteractable::execOnBeginOverlapInteract)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapInteract(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGimmickInteractable::execOnEndOverlapInteract)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapInteract(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	void AELSSGimmickInteractable::StaticRegisterNativesAELSSGimmickInteractable()
	{
		UClass* Class = AELSSGimmickInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlapInteract", &AELSSGimmickInteractable::execOnBeginOverlapInteract },
			{ "OnEndOverlapInteract", &AELSSGimmickInteractable::execOnEndOverlapInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics
	{
		struct ELSSGimmickInteractable_eventOnBeginOverlapInteract_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickInteractable_eventOnBeginOverlapInteract_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickInteractable_eventOnBeginOverlapInteract_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickInteractable_eventOnBeginOverlapInteract_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickInteractable_eventOnBeginOverlapInteract_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSGimmickInteractable_eventOnBeginOverlapInteract_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGimmickInteractable_eventOnBeginOverlapInteract_Parms), &Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickInteractable_eventOnBeginOverlapInteract_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickInteractable, nullptr, "OnBeginOverlapInteract", nullptr, nullptr, sizeof(ELSSGimmickInteractable_eventOnBeginOverlapInteract_Parms), Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics
	{
		struct ELSSGimmickInteractable_eventOnEndOverlapInteract_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickInteractable_eventOnEndOverlapInteract_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickInteractable_eventOnEndOverlapInteract_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickInteractable_eventOnEndOverlapInteract_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickInteractable_eventOnEndOverlapInteract_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickInteractable, nullptr, "OnEndOverlapInteract", nullptr, nullptr, sizeof(ELSSGimmickInteractable_eventOnEndOverlapInteract_Parms), Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSGimmickInteractable_NoRegister()
	{
		return AELSSGimmickInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AELSSGimmickInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperateStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OperateStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractUIOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractUIOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotIconLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DotIconLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotIconBaseLocationOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DotIconBaseLocationOffsetZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSGimmickInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSGimmickBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSGimmickInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSGimmickInteractable_OnBeginOverlapInteract, "OnBeginOverlapInteract" }, // 2603324579
		{ &Z_Construct_UFunction_AELSSGimmickInteractable_OnEndOverlapInteract, "OnEndOverlapInteract" }, // 1073678316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickInteractable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSGimmickInteractable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGimmickInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_OperateStateClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickInteractable" },
		{ "ModuleRelativePath", "Public/ELSSGimmickInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_OperateStateClass = { "OperateStateClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickInteractable, OperateStateClass), Z_Construct_UClass_UELSSActionStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_OperateStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_OperateStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_RootComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSGimmickInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickInteractable, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_InteractCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSGimmickInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_InteractCollision = { "InteractCollision", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickInteractable, InteractCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_InteractCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_InteractCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_InteractUIOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickInteractable" },
		{ "ModuleRelativePath", "Public/ELSSGimmickInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_InteractUIOffset = { "InteractUIOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickInteractable, InteractUIOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_InteractUIOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_InteractUIOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_DotIconLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickInteractable" },
		{ "ModuleRelativePath", "Public/ELSSGimmickInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_DotIconLocationOffset = { "DotIconLocationOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickInteractable, DotIconLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_DotIconLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_DotIconLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_DotIconBaseLocationOffsetZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickInteractable" },
		{ "ModuleRelativePath", "Public/ELSSGimmickInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_DotIconBaseLocationOffsetZ = { "DotIconBaseLocationOffsetZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickInteractable, DotIconBaseLocationOffsetZ), METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_DotIconBaseLocationOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_DotIconBaseLocationOffsetZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSGimmickInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_OperateStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_RootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_InteractCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_InteractUIOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_DotIconLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickInteractable_Statics::NewProp_DotIconBaseLocationOffsetZ,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSGimmickInteractable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSGimmickInteractable, IELSSInteractableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSGimmickInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSGimmickInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSGimmickInteractable_Statics::ClassParams = {
		&AELSSGimmickInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSGimmickInteractable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickInteractable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSGimmickInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSGimmickInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSGimmickInteractable, 4095517937);
	template<> ABP_200508_API UClass* StaticClass<AELSSGimmickInteractable>()
	{
		return AELSSGimmickInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSGimmickInteractable(Z_Construct_UClass_AELSSGimmickInteractable, &AELSSGimmickInteractable::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSGimmickInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSGimmickInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
