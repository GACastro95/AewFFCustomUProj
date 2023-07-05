// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGimmickReviveArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGimmickReviveArea() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickReviveArea_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickReviveArea();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSGimmickReviveArea::execOnAreaBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAreaBeginOverlap(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGimmickReviveArea::execOnAreaEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAreaEndOverlap(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	static FName NAME_AELSSGimmickReviveArea_UpdateRiveArea = FName(TEXT("UpdateRiveArea"));
	void AELSSGimmickReviveArea::UpdateRiveArea(bool NewIsAnyOverlap)
	{
		ELSSGimmickReviveArea_eventUpdateRiveArea_Parms Parms;
		Parms.NewIsAnyOverlap=NewIsAnyOverlap ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGimmickReviveArea_UpdateRiveArea),&Parms);
	}
	void AELSSGimmickReviveArea::StaticRegisterNativesAELSSGimmickReviveArea()
	{
		UClass* Class = AELSSGimmickReviveArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAreaBeginOverlap", &AELSSGimmickReviveArea::execOnAreaBeginOverlap },
			{ "OnAreaEndOverlap", &AELSSGimmickReviveArea::execOnAreaEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics
	{
		struct ELSSGimmickReviveArea_eventOnAreaBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickReviveArea_eventOnAreaBeginOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickReviveArea_eventOnAreaBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickReviveArea_eventOnAreaBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickReviveArea_eventOnAreaBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ELSSGimmickReviveArea_eventOnAreaBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGimmickReviveArea_eventOnAreaBeginOverlap_Parms), &Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickReviveArea_eventOnAreaBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickReviveArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickReviveArea, nullptr, "OnAreaBeginOverlap", nullptr, nullptr, sizeof(ELSSGimmickReviveArea_eventOnAreaBeginOverlap_Parms), Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics
	{
		struct ELSSGimmickReviveArea_eventOnAreaEndOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickReviveArea_eventOnAreaEndOverlap_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickReviveArea_eventOnAreaEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickReviveArea_eventOnAreaEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickReviveArea_eventOnAreaEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickReviveArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickReviveArea, nullptr, "OnAreaEndOverlap", nullptr, nullptr, sizeof(ELSSGimmickReviveArea_eventOnAreaEndOverlap_Parms), Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics
	{
		static void NewProp_NewIsAnyOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsAnyOverlap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::NewProp_NewIsAnyOverlap_SetBit(void* Obj)
	{
		((ELSSGimmickReviveArea_eventUpdateRiveArea_Parms*)Obj)->NewIsAnyOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::NewProp_NewIsAnyOverlap = { "NewIsAnyOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGimmickReviveArea_eventUpdateRiveArea_Parms), &Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::NewProp_NewIsAnyOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::NewProp_NewIsAnyOverlap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickReviveArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickReviveArea, nullptr, "UpdateRiveArea", nullptr, nullptr, sizeof(ELSSGimmickReviveArea_eventUpdateRiveArea_Parms), Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSGimmickReviveArea_NoRegister()
	{
		return AELSSGimmickReviveArea::StaticClass();
	}
	struct Z_Construct_UClass_AELSSGimmickReviveArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AreaCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoveryKoHPCycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoveryKoHPCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoveryKoHPRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoveryKoHPRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReviveHpRecoverPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReviveHpRecoverPercent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlapPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAnyOverlap_MetaData[];
#endif
		static void NewProp_isAnyOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAnyOverlap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSGimmickReviveArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSGimmickBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSGimmickReviveArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaBeginOverlap, "OnAreaBeginOverlap" }, // 3419094356
		{ &Z_Construct_UFunction_AELSSGimmickReviveArea_OnAreaEndOverlap, "OnAreaEndOverlap" }, // 3512710679
		{ &Z_Construct_UFunction_AELSSGimmickReviveArea_UpdateRiveArea, "UpdateRiveArea" }, // 1653446267
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickReviveArea_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSGimmickReviveArea.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGimmickReviveArea.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_AreaCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickReviveArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSGimmickReviveArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_AreaCollision = { "AreaCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickReviveArea, AreaCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_AreaCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_AreaCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_RecoveryKoHPCycle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickReviveArea" },
		{ "ModuleRelativePath", "Public/ELSSGimmickReviveArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_RecoveryKoHPCycle = { "RecoveryKoHPCycle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickReviveArea, RecoveryKoHPCycle), METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_RecoveryKoHPCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_RecoveryKoHPCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_RecoveryKoHPRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickReviveArea" },
		{ "ModuleRelativePath", "Public/ELSSGimmickReviveArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_RecoveryKoHPRate = { "RecoveryKoHPRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickReviveArea, RecoveryKoHPRate), METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_RecoveryKoHPRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_RecoveryKoHPRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_ReviveHpRecoverPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickReviveArea" },
		{ "ModuleRelativePath", "Public/ELSSGimmickReviveArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_ReviveHpRecoverPercent = { "ReviveHpRecoverPercent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickReviveArea, ReviveHpRecoverPercent), METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_ReviveHpRecoverPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_ReviveHpRecoverPercent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_OverlapPlayers_Inner = { "OverlapPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_OverlapPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickReviveArea" },
		{ "ModuleRelativePath", "Public/ELSSGimmickReviveArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_OverlapPlayers = { "OverlapPlayers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickReviveArea, OverlapPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_OverlapPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_OverlapPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_isAnyOverlap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickReviveArea" },
		{ "ModuleRelativePath", "Public/ELSSGimmickReviveArea.h" },
	};
#endif
	void Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_isAnyOverlap_SetBit(void* Obj)
	{
		((AELSSGimmickReviveArea*)Obj)->isAnyOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_isAnyOverlap = { "isAnyOverlap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSGimmickReviveArea), &Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_isAnyOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_isAnyOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_isAnyOverlap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSGimmickReviveArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_AreaCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_RecoveryKoHPCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_RecoveryKoHPRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_ReviveHpRecoverPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_OverlapPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_OverlapPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickReviveArea_Statics::NewProp_isAnyOverlap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSGimmickReviveArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSGimmickReviveArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSGimmickReviveArea_Statics::ClassParams = {
		&AELSSGimmickReviveArea::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSGimmickReviveArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickReviveArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSGimmickReviveArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSGimmickReviveArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSGimmickReviveArea, 1396106636);
	template<> ABP_200508_API UClass* StaticClass<AELSSGimmickReviveArea>()
	{
		return AELSSGimmickReviveArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSGimmickReviveArea(Z_Construct_UClass_AELSSGimmickReviveArea, &AELSSGimmickReviveArea::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSGimmickReviveArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSGimmickReviveArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
