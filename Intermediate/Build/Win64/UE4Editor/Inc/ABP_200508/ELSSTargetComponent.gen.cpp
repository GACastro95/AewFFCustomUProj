// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSTargetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSTargetComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSTargetComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSTargetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraHomingParam();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSTargetComponent::execBeginCameraHoming)
	{
		P_GET_STRUCT_REF(FSSCameraHomingParam,Z_Param_Out_inHomingParam);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginCameraHoming(Z_Param_Out_inHomingParam,Z_Param_InDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTargetComponent::execEndCameraHoming)
	{
		P_GET_UBOOL(Z_Param_inApplyRemainTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndCameraHoming(Z_Param_inApplyRemainTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTargetComponent::execGetTargetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetTargetActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTargetComponent::execOnBeginOverlapTargetRange)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapTargetRange(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTargetComponent::execOnEndOverlapTargetRange)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapTargetRange(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTargetComponent::execSearchTargetFromDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_inDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SearchTargetFromDirection(Z_Param_Out_inDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTargetComponent::execSearchTargetInteractAttack)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_inDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inMaxLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inAngleLimit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDiffZLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SearchTargetInteractAttack(Z_Param_Out_inDirection,Z_Param_inMaxLength,Z_Param_inAngleLimit,Z_Param_inDiffZLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTargetComponent::execUpdateTargetOnAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTargetOnAttack();
		P_NATIVE_END;
	}
	void UELSSTargetComponent::StaticRegisterNativesUELSSTargetComponent()
	{
		UClass* Class = UELSSTargetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginCameraHoming", &UELSSTargetComponent::execBeginCameraHoming },
			{ "EndCameraHoming", &UELSSTargetComponent::execEndCameraHoming },
			{ "GetTargetActor", &UELSSTargetComponent::execGetTargetActor },
			{ "OnBeginOverlapTargetRange", &UELSSTargetComponent::execOnBeginOverlapTargetRange },
			{ "OnEndOverlapTargetRange", &UELSSTargetComponent::execOnEndOverlapTargetRange },
			{ "SearchTargetFromDirection", &UELSSTargetComponent::execSearchTargetFromDirection },
			{ "SearchTargetInteractAttack", &UELSSTargetComponent::execSearchTargetInteractAttack },
			{ "UpdateTargetOnAttack", &UELSSTargetComponent::execUpdateTargetOnAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics
	{
		struct ELSSTargetComponent_eventBeginCameraHoming_Parms
		{
			FSSCameraHomingParam inHomingParam;
			float InDuration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inHomingParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inHomingParam;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::NewProp_inHomingParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::NewProp_inHomingParam = { "inHomingParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventBeginCameraHoming_Parms, inHomingParam), Z_Construct_UScriptStruct_FSSCameraHomingParam, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::NewProp_inHomingParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::NewProp_inHomingParam_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventBeginCameraHoming_Parms, InDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::NewProp_inHomingParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::NewProp_InDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTargetComponent, nullptr, "BeginCameraHoming", nullptr, nullptr, sizeof(ELSSTargetComponent_eventBeginCameraHoming_Parms), Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics
	{
		struct ELSSTargetComponent_eventEndCameraHoming_Parms
		{
			bool inApplyRemainTime;
		};
		static void NewProp_inApplyRemainTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inApplyRemainTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::NewProp_inApplyRemainTime_SetBit(void* Obj)
	{
		((ELSSTargetComponent_eventEndCameraHoming_Parms*)Obj)->inApplyRemainTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::NewProp_inApplyRemainTime = { "inApplyRemainTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSTargetComponent_eventEndCameraHoming_Parms), &Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::NewProp_inApplyRemainTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::NewProp_inApplyRemainTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTargetComponent, nullptr, "EndCameraHoming", nullptr, nullptr, sizeof(ELSSTargetComponent_eventEndCameraHoming_Parms), Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor_Statics
	{
		struct ELSSTargetComponent_eventGetTargetActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventGetTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTargetComponent, nullptr, "GetTargetActor", nullptr, nullptr, sizeof(ELSSTargetComponent_eventGetTargetActor_Parms), Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics
	{
		struct ELSSTargetComponent_eventOnBeginOverlapTargetRange_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventOnBeginOverlapTargetRange_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventOnBeginOverlapTargetRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventOnBeginOverlapTargetRange_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventOnBeginOverlapTargetRange_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSTargetComponent_eventOnBeginOverlapTargetRange_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSTargetComponent_eventOnBeginOverlapTargetRange_Parms), &Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventOnBeginOverlapTargetRange_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTargetComponent, nullptr, "OnBeginOverlapTargetRange", nullptr, nullptr, sizeof(ELSSTargetComponent_eventOnBeginOverlapTargetRange_Parms), Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics
	{
		struct ELSSTargetComponent_eventOnEndOverlapTargetRange_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventOnEndOverlapTargetRange_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventOnEndOverlapTargetRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventOnEndOverlapTargetRange_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventOnEndOverlapTargetRange_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTargetComponent, nullptr, "OnEndOverlapTargetRange", nullptr, nullptr, sizeof(ELSSTargetComponent_eventOnEndOverlapTargetRange_Parms), Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics
	{
		struct ELSSTargetComponent_eventSearchTargetFromDirection_Parms
		{
			FVector inDirection;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inDirection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::NewProp_inDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::NewProp_inDirection = { "inDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventSearchTargetFromDirection_Parms, inDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::NewProp_inDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::NewProp_inDirection_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventSearchTargetFromDirection_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::NewProp_inDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTargetComponent, nullptr, "SearchTargetFromDirection", nullptr, nullptr, sizeof(ELSSTargetComponent_eventSearchTargetFromDirection_Parms), Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics
	{
		struct ELSSTargetComponent_eventSearchTargetInteractAttack_Parms
		{
			FVector inDirection;
			float inMaxLength;
			float inAngleLimit;
			float inDiffZLimit;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inMaxLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inAngleLimit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDiffZLimit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_inDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_inDirection = { "inDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventSearchTargetInteractAttack_Parms, inDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_inDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_inDirection_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_inMaxLength = { "inMaxLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventSearchTargetInteractAttack_Parms, inMaxLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_inAngleLimit = { "inAngleLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventSearchTargetInteractAttack_Parms, inAngleLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_inDiffZLimit = { "inDiffZLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventSearchTargetInteractAttack_Parms, inDiffZLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTargetComponent_eventSearchTargetInteractAttack_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_inDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_inMaxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_inAngleLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_inDiffZLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTargetComponent, nullptr, "SearchTargetInteractAttack", nullptr, nullptr, sizeof(ELSSTargetComponent_eventSearchTargetInteractAttack_Parms), Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTargetComponent_UpdateTargetOnAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTargetComponent_UpdateTargetOnAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTargetComponent_UpdateTargetOnAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTargetComponent, nullptr, "UpdateTargetOnAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTargetComponent_UpdateTargetOnAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTargetComponent_UpdateTargetOnAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTargetComponent_UpdateTargetOnAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTargetComponent_UpdateTargetOnAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSTargetComponent_NoRegister()
	{
		return UELSSTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELSSTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRangeCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetRangeCollision;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetableActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetableActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetableActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVectorKeepTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetVectorKeepTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchTargetDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SearchTargetDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchTargetAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SearchTargetAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchTargetHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SearchTargetHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchTargetDistanceDifficultyScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SearchTargetDistanceDifficultyScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchTargetAngleDifficultyScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SearchTargetAngleDifficultyScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchTargetPriorityDifficultyScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SearchTargetPriorityDifficultyScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraHomingParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraHomingParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSTargetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSTargetComponent_BeginCameraHoming, "BeginCameraHoming" }, // 2349600300
		{ &Z_Construct_UFunction_UELSSTargetComponent_EndCameraHoming, "EndCameraHoming" }, // 85554053
		{ &Z_Construct_UFunction_UELSSTargetComponent_GetTargetActor, "GetTargetActor" }, // 3845895030
		{ &Z_Construct_UFunction_UELSSTargetComponent_OnBeginOverlapTargetRange, "OnBeginOverlapTargetRange" }, // 1776711482
		{ &Z_Construct_UFunction_UELSSTargetComponent_OnEndOverlapTargetRange, "OnEndOverlapTargetRange" }, // 414989238
		{ &Z_Construct_UFunction_UELSSTargetComponent_SearchTargetFromDirection, "SearchTargetFromDirection" }, // 863578791
		{ &Z_Construct_UFunction_UELSSTargetComponent_SearchTargetInteractAttack, "SearchTargetInteractAttack" }, // 1465817633
		{ &Z_Construct_UFunction_UELSSTargetComponent_UpdateTargetOnAttack, "UpdateTargetOnAttack" }, // 586387127
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELSSTargetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetRangeCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetRangeCollision = { "TargetRangeCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, TargetRangeCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetRangeCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetRangeCollision_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetableActors_Inner = { "TargetableActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetableActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetableActors = { "TargetableActors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, TargetableActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetableActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetableActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetVector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetVector = { "TargetVector", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, TargetVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetVectorKeepTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetVectorKeepTime = { "TargetVectorKeepTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, TargetVectorKeepTime), METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetVectorKeepTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetVectorKeepTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetDistance = { "SearchTargetDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, SearchTargetDistance), METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetAngle = { "SearchTargetAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, SearchTargetAngle), METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetHeight = { "SearchTargetHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, SearchTargetHeight), METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetDistanceDifficultyScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetDistanceDifficultyScale = { "SearchTargetDistanceDifficultyScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, SearchTargetDistanceDifficultyScale), METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetDistanceDifficultyScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetDistanceDifficultyScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetAngleDifficultyScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetAngleDifficultyScale = { "SearchTargetAngleDifficultyScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, SearchTargetAngleDifficultyScale), METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetAngleDifficultyScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetAngleDifficultyScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetPriorityDifficultyScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetPriorityDifficultyScale = { "SearchTargetPriorityDifficultyScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, SearchTargetPriorityDifficultyScale), METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetPriorityDifficultyScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetPriorityDifficultyScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_CameraHomingParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSTargetComponent" },
		{ "ModuleRelativePath", "Public/ELSSTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_CameraHomingParam = { "CameraHomingParam", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSTargetComponent, CameraHomingParam), Z_Construct_UScriptStruct_FSSCameraHomingParam, METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_CameraHomingParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_CameraHomingParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSTargetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetRangeCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetableActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetableActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetVectorKeepTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetDistanceDifficultyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetAngleDifficultyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_SearchTargetPriorityDifficultyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSTargetComponent_Statics::NewProp_CameraHomingParam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSTargetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSTargetComponent_Statics::ClassParams = {
		&UELSSTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSTargetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSTargetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTargetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSTargetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSTargetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSTargetComponent, 3610027231);
	template<> ABP_200508_API UClass* StaticClass<UELSSTargetComponent>()
	{
		return UELSSTargetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSTargetComponent(Z_Construct_UClass_UELSSTargetComponent, &UELSSTargetComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSTargetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSTargetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
