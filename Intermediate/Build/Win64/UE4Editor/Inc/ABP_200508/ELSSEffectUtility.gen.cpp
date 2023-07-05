// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSEffectUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSEffectUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSEffectUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSEffectUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPoolDecalBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHitEffectType();
// End Cross Module References
	DEFINE_FUNCTION(UELSSEffectUtility::execPlayDecalAtLocationFromPool)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_DecalClass);
		P_GET_STRUCT(FVector,Z_Param_DecalSize);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeSpan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPoolDecalBase**)Z_Param__Result=UELSSEffectUtility::PlayDecalAtLocationFromPool(Z_Param_WorldContextObject,Z_Param_DecalClass,Z_Param_DecalSize,Z_Param_Location,Z_Param_Rotation,Z_Param_LifeSpan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSEffectUtility::execPlayDecalAttachedFromPool)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_DecalClass);
		P_GET_STRUCT(FVector,Z_Param_DecalSize);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeSpan);
		P_GET_UBOOL(Z_Param_ifNotEnoughReuseWithoutAlloc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPoolDecalBase**)Z_Param__Result=UELSSEffectUtility::PlayDecalAttachedFromPool(Z_Param_WorldContextObject,Z_Param_DecalClass,Z_Param_DecalSize,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_LifeSpan,Z_Param_ifNotEnoughReuseWithoutAlloc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSEffectUtility::execPlayEffectFromPoolToTransformWithLoopSE)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_EffectDatabaseRowName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_BaseTransform);
		P_GET_UBOOL(Z_Param_isPlaySE);
		P_GET_OBJECT(UMeshComponent,Z_Param_playSE3DTargetMeshComponent);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_out_loopSEUniqueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UELSSEffectUtility::PlayEffectFromPoolToTransformWithLoopSE(Z_Param_WorldContextObject,Z_Param_Out_EffectDatabaseRowName,Z_Param_Out_BaseTransform,Z_Param_isPlaySE,Z_Param_playSE3DTargetMeshComponent,Z_Param_Out_out_loopSEUniqueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSEffectUtility::execPlayEffectFromPoolToTransformWithSE)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_EffectDatabaseRowName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_BaseTransform);
		P_GET_UBOOL(Z_Param_isPlaySE);
		P_GET_OBJECT(UMeshComponent,Z_Param_playSE3DTargetMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UELSSEffectUtility::PlayEffectFromPoolToTransformWithSE(Z_Param_WorldContextObject,Z_Param_Out_EffectDatabaseRowName,Z_Param_Out_BaseTransform,Z_Param_isPlaySE,Z_Param_playSE3DTargetMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSEffectUtility::execPlayEffectFromPoolWithLoopSE)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_EffectDatabaseRowName);
		P_GET_OBJECT(USceneComponent,Z_Param_baseObject);
		P_GET_UBOOL(Z_Param_isPlaySE);
		P_GET_OBJECT(UMeshComponent,Z_Param_playSE3DTargetMeshComponent);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_out_loopSEUniqueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UELSSEffectUtility::PlayEffectFromPoolWithLoopSE(Z_Param_WorldContextObject,Z_Param_Out_EffectDatabaseRowName,Z_Param_baseObject,Z_Param_isPlaySE,Z_Param_playSE3DTargetMeshComponent,Z_Param_Out_out_loopSEUniqueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSEffectUtility::execPlayEffectFromPoolWithSE)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_EffectDatabaseRowName);
		P_GET_OBJECT(USceneComponent,Z_Param_baseObject);
		P_GET_UBOOL(Z_Param_isPlaySE);
		P_GET_OBJECT(UMeshComponent,Z_Param_playSE3DTargetMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UELSSEffectUtility::PlayEffectFromPoolWithSE(Z_Param_WorldContextObject,Z_Param_Out_EffectDatabaseRowName,Z_Param_baseObject,Z_Param_isPlaySE,Z_Param_playSE3DTargetMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSEffectUtility::execPlayHitEffectFromPoolToTransform)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESSHitEffectType,Z_Param_Type);
		P_GET_UBOOL(Z_Param_isPlaySE);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_BaseTransform);
		P_GET_OBJECT(UMeshComponent,Z_Param_playSound3DTargetMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UELSSEffectUtility::PlayHitEffectFromPoolToTransform(Z_Param_WorldContextObject,ESSHitEffectType(Z_Param_Type),Z_Param_isPlaySE,Z_Param_Out_BaseTransform,Z_Param_playSound3DTargetMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSEffectUtility::execStopDecalAndSinkToPool)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AELSSPoolDecalBase,Z_Param_effectActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSEffectUtility::StopDecalAndSinkToPool(Z_Param_WorldContextObject,Z_Param_effectActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSEffectUtility::execStopEffectAndSinkToPool)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_effectActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_loopSEUniqueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSEffectUtility::StopEffectAndSinkToPool(Z_Param_WorldContextObject,Z_Param_effectActor,Z_Param_loopSEUniqueId);
		P_NATIVE_END;
	}
	void UELSSEffectUtility::StaticRegisterNativesUELSSEffectUtility()
	{
		UClass* Class = UELSSEffectUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayDecalAtLocationFromPool", &UELSSEffectUtility::execPlayDecalAtLocationFromPool },
			{ "PlayDecalAttachedFromPool", &UELSSEffectUtility::execPlayDecalAttachedFromPool },
			{ "PlayEffectFromPoolToTransformWithLoopSE", &UELSSEffectUtility::execPlayEffectFromPoolToTransformWithLoopSE },
			{ "PlayEffectFromPoolToTransformWithSE", &UELSSEffectUtility::execPlayEffectFromPoolToTransformWithSE },
			{ "PlayEffectFromPoolWithLoopSE", &UELSSEffectUtility::execPlayEffectFromPoolWithLoopSE },
			{ "PlayEffectFromPoolWithSE", &UELSSEffectUtility::execPlayEffectFromPoolWithSE },
			{ "PlayHitEffectFromPoolToTransform", &UELSSEffectUtility::execPlayHitEffectFromPoolToTransform },
			{ "StopDecalAndSinkToPool", &UELSSEffectUtility::execStopDecalAndSinkToPool },
			{ "StopEffectAndSinkToPool", &UELSSEffectUtility::execStopEffectAndSinkToPool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics
	{
		struct ELSSEffectUtility_eventPlayDecalAtLocationFromPool_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<AELSSPoolDecalBase>  DecalClass;
			FVector DecalSize;
			FVector Location;
			FRotator Rotation;
			float LifeSpan;
			AELSSPoolDecalBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DecalClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAtLocationFromPool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_DecalClass = { "DecalClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAtLocationFromPool_Parms, DecalClass), Z_Construct_UClass_AELSSPoolDecalBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAtLocationFromPool_Parms, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAtLocationFromPool_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAtLocationFromPool_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAtLocationFromPool_Parms, LifeSpan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAtLocationFromPool_Parms, ReturnValue), Z_Construct_UClass_AELSSPoolDecalBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_DecalClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_LifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSEffectUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSEffectUtility, nullptr, "PlayDecalAtLocationFromPool", nullptr, nullptr, sizeof(ELSSEffectUtility_eventPlayDecalAtLocationFromPool_Parms), Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics
	{
		struct ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<AELSSPoolDecalBase>  DecalClass;
			FVector DecalSize;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			float LifeSpan;
			bool ifNotEnoughReuseWithoutAlloc;
			AELSSPoolDecalBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DecalClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
		static void NewProp_ifNotEnoughReuseWithoutAlloc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ifNotEnoughReuseWithoutAlloc;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_DecalClass = { "DecalClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms, DecalClass), Z_Construct_UClass_AELSSPoolDecalBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms, LifeSpan), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_ifNotEnoughReuseWithoutAlloc_SetBit(void* Obj)
	{
		((ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms*)Obj)->ifNotEnoughReuseWithoutAlloc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_ifNotEnoughReuseWithoutAlloc = { "ifNotEnoughReuseWithoutAlloc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms), &Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_ifNotEnoughReuseWithoutAlloc_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms, ReturnValue), Z_Construct_UClass_AELSSPoolDecalBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_DecalClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_LifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_ifNotEnoughReuseWithoutAlloc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSEffectUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSEffectUtility, nullptr, "PlayDecalAttachedFromPool", nullptr, nullptr, sizeof(ELSSEffectUtility_eventPlayDecalAttachedFromPool_Parms), Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics
	{
		struct ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithLoopSE_Parms
		{
			const UObject* WorldContextObject;
			FName EffectDatabaseRowName;
			FTransform BaseTransform;
			bool isPlaySE;
			UMeshComponent* playSE3DTargetMeshComponent;
			int32 out_loopSEUniqueId;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDatabaseRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectDatabaseRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
		static void NewProp_isPlaySE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlaySE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playSE3DTargetMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playSE3DTargetMeshComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_loopSEUniqueId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithLoopSE_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_EffectDatabaseRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_EffectDatabaseRowName = { "EffectDatabaseRowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithLoopSE_Parms, EffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_EffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_EffectDatabaseRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_BaseTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithLoopSE_Parms, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_BaseTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_BaseTransform_MetaData)) };
	void Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_isPlaySE_SetBit(void* Obj)
	{
		((ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithLoopSE_Parms*)Obj)->isPlaySE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_isPlaySE = { "isPlaySE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithLoopSE_Parms), &Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_isPlaySE_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_playSE3DTargetMeshComponent = { "playSE3DTargetMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithLoopSE_Parms, playSE3DTargetMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_out_loopSEUniqueId = { "out_loopSEUniqueId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithLoopSE_Parms, out_loopSEUniqueId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithLoopSE_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_EffectDatabaseRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_BaseTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_isPlaySE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_playSE3DTargetMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_out_loopSEUniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSEffectUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSEffectUtility, nullptr, "PlayEffectFromPoolToTransformWithLoopSE", nullptr, nullptr, sizeof(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithLoopSE_Parms), Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics
	{
		struct ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithSE_Parms
		{
			const UObject* WorldContextObject;
			FName EffectDatabaseRowName;
			FTransform BaseTransform;
			bool isPlaySE;
			UMeshComponent* playSE3DTargetMeshComponent;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDatabaseRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectDatabaseRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
		static void NewProp_isPlaySE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlaySE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playSE3DTargetMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playSE3DTargetMeshComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithSE_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_EffectDatabaseRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_EffectDatabaseRowName = { "EffectDatabaseRowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithSE_Parms, EffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_EffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_EffectDatabaseRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_BaseTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithSE_Parms, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_BaseTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_BaseTransform_MetaData)) };
	void Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_isPlaySE_SetBit(void* Obj)
	{
		((ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithSE_Parms*)Obj)->isPlaySE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_isPlaySE = { "isPlaySE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithSE_Parms), &Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_isPlaySE_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_playSE3DTargetMeshComponent = { "playSE3DTargetMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithSE_Parms, playSE3DTargetMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithSE_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_EffectDatabaseRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_BaseTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_isPlaySE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_playSE3DTargetMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSEffectUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSEffectUtility, nullptr, "PlayEffectFromPoolToTransformWithSE", nullptr, nullptr, sizeof(ELSSEffectUtility_eventPlayEffectFromPoolToTransformWithSE_Parms), Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics
	{
		struct ELSSEffectUtility_eventPlayEffectFromPoolWithLoopSE_Parms
		{
			const UObject* WorldContextObject;
			FName EffectDatabaseRowName;
			USceneComponent* baseObject;
			bool isPlaySE;
			UMeshComponent* playSE3DTargetMeshComponent;
			int32 out_loopSEUniqueId;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDatabaseRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectDatabaseRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_baseObject;
		static void NewProp_isPlaySE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlaySE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playSE3DTargetMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playSE3DTargetMeshComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_loopSEUniqueId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolWithLoopSE_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_EffectDatabaseRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_EffectDatabaseRowName = { "EffectDatabaseRowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolWithLoopSE_Parms, EffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_EffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_EffectDatabaseRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_baseObject_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_baseObject = { "baseObject", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolWithLoopSE_Parms, baseObject), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_baseObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_baseObject_MetaData)) };
	void Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_isPlaySE_SetBit(void* Obj)
	{
		((ELSSEffectUtility_eventPlayEffectFromPoolWithLoopSE_Parms*)Obj)->isPlaySE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_isPlaySE = { "isPlaySE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSEffectUtility_eventPlayEffectFromPoolWithLoopSE_Parms), &Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_isPlaySE_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_playSE3DTargetMeshComponent = { "playSE3DTargetMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolWithLoopSE_Parms, playSE3DTargetMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_out_loopSEUniqueId = { "out_loopSEUniqueId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolWithLoopSE_Parms, out_loopSEUniqueId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolWithLoopSE_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_EffectDatabaseRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_baseObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_isPlaySE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_playSE3DTargetMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_out_loopSEUniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSEffectUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSEffectUtility, nullptr, "PlayEffectFromPoolWithLoopSE", nullptr, nullptr, sizeof(ELSSEffectUtility_eventPlayEffectFromPoolWithLoopSE_Parms), Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics
	{
		struct ELSSEffectUtility_eventPlayEffectFromPoolWithSE_Parms
		{
			const UObject* WorldContextObject;
			FName EffectDatabaseRowName;
			USceneComponent* baseObject;
			bool isPlaySE;
			UMeshComponent* playSE3DTargetMeshComponent;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDatabaseRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectDatabaseRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_baseObject;
		static void NewProp_isPlaySE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlaySE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playSE3DTargetMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playSE3DTargetMeshComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolWithSE_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_EffectDatabaseRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_EffectDatabaseRowName = { "EffectDatabaseRowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolWithSE_Parms, EffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_EffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_EffectDatabaseRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_baseObject_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_baseObject = { "baseObject", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolWithSE_Parms, baseObject), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_baseObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_baseObject_MetaData)) };
	void Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_isPlaySE_SetBit(void* Obj)
	{
		((ELSSEffectUtility_eventPlayEffectFromPoolWithSE_Parms*)Obj)->isPlaySE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_isPlaySE = { "isPlaySE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSEffectUtility_eventPlayEffectFromPoolWithSE_Parms), &Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_isPlaySE_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_playSE3DTargetMeshComponent = { "playSE3DTargetMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolWithSE_Parms, playSE3DTargetMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_playSE3DTargetMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayEffectFromPoolWithSE_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_EffectDatabaseRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_baseObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_isPlaySE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_playSE3DTargetMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSEffectUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSEffectUtility, nullptr, "PlayEffectFromPoolWithSE", nullptr, nullptr, sizeof(ELSSEffectUtility_eventPlayEffectFromPoolWithSE_Parms), Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics
	{
		struct ELSSEffectUtility_eventPlayHitEffectFromPoolToTransform_Parms
		{
			const UObject* WorldContextObject;
			ESSHitEffectType Type;
			bool isPlaySE;
			FTransform BaseTransform;
			UMeshComponent* playSound3DTargetMeshComponent;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_isPlaySE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlaySE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playSound3DTargetMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playSound3DTargetMeshComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayHitEffectFromPoolToTransform_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayHitEffectFromPoolToTransform_Parms, Type), Z_Construct_UEnum_ABP_200508_ESSHitEffectType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_isPlaySE_SetBit(void* Obj)
	{
		((ELSSEffectUtility_eventPlayHitEffectFromPoolToTransform_Parms*)Obj)->isPlaySE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_isPlaySE = { "isPlaySE", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSEffectUtility_eventPlayHitEffectFromPoolToTransform_Parms), &Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_isPlaySE_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_BaseTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayHitEffectFromPoolToTransform_Parms, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_BaseTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_BaseTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_playSound3DTargetMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_playSound3DTargetMeshComponent = { "playSound3DTargetMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayHitEffectFromPoolToTransform_Parms, playSound3DTargetMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_playSound3DTargetMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_playSound3DTargetMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventPlayHitEffectFromPoolToTransform_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_isPlaySE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_BaseTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_playSound3DTargetMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSEffectUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSEffectUtility, nullptr, "PlayHitEffectFromPoolToTransform", nullptr, nullptr, sizeof(ELSSEffectUtility_eventPlayHitEffectFromPoolToTransform_Parms), Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics
	{
		struct ELSSEffectUtility_eventStopDecalAndSinkToPool_Parms
		{
			const UObject* WorldContextObject;
			AELSSPoolDecalBase* effectActor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_effectActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventStopDecalAndSinkToPool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::NewProp_effectActor = { "effectActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventStopDecalAndSinkToPool_Parms, effectActor), Z_Construct_UClass_AELSSPoolDecalBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::NewProp_effectActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSEffectUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSEffectUtility, nullptr, "StopDecalAndSinkToPool", nullptr, nullptr, sizeof(ELSSEffectUtility_eventStopDecalAndSinkToPool_Parms), Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics
	{
		struct ELSSEffectUtility_eventStopEffectAndSinkToPool_Parms
		{
			const UObject* WorldContextObject;
			AActor* effectActor;
			int32 loopSEUniqueId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_effectActor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_loopSEUniqueId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventStopEffectAndSinkToPool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::NewProp_effectActor = { "effectActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventStopEffectAndSinkToPool_Parms, effectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::NewProp_loopSEUniqueId = { "loopSEUniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSEffectUtility_eventStopEffectAndSinkToPool_Parms, loopSEUniqueId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::NewProp_effectActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::NewProp_loopSEUniqueId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSEffectUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSEffectUtility, nullptr, "StopEffectAndSinkToPool", nullptr, nullptr, sizeof(ELSSEffectUtility_eventStopEffectAndSinkToPool_Parms), Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSEffectUtility_NoRegister()
	{
		return UELSSEffectUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSEffectUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSEffectUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSEffectUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAtLocationFromPool, "PlayDecalAtLocationFromPool" }, // 2662302968
		{ &Z_Construct_UFunction_UELSSEffectUtility_PlayDecalAttachedFromPool, "PlayDecalAttachedFromPool" }, // 1044535951
		{ &Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithLoopSE, "PlayEffectFromPoolToTransformWithLoopSE" }, // 744976006
		{ &Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolToTransformWithSE, "PlayEffectFromPoolToTransformWithSE" }, // 2301784568
		{ &Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithLoopSE, "PlayEffectFromPoolWithLoopSE" }, // 290712747
		{ &Z_Construct_UFunction_UELSSEffectUtility_PlayEffectFromPoolWithSE, "PlayEffectFromPoolWithSE" }, // 3104997892
		{ &Z_Construct_UFunction_UELSSEffectUtility_PlayHitEffectFromPoolToTransform, "PlayHitEffectFromPoolToTransform" }, // 2167617628
		{ &Z_Construct_UFunction_UELSSEffectUtility_StopDecalAndSinkToPool, "StopDecalAndSinkToPool" }, // 1390433297
		{ &Z_Construct_UFunction_UELSSEffectUtility_StopEffectAndSinkToPool, "StopEffectAndSinkToPool" }, // 186336197
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSEffectUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSEffectUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSEffectUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSEffectUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSEffectUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSEffectUtility_Statics::ClassParams = {
		&UELSSEffectUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSEffectUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSEffectUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSEffectUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSEffectUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSEffectUtility, 43647044);
	template<> ABP_200508_API UClass* StaticClass<UELSSEffectUtility>()
	{
		return UELSSEffectUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSEffectUtility(Z_Construct_UClass_UELSSEffectUtility, &UELSSEffectUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSEffectUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSEffectUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
