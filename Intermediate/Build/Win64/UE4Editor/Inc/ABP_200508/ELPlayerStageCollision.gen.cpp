// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPlayerStageCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPlayerStageCollision() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerStageCollision_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerStageCollision();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELPlayerStageCollisionActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELPlayerStageCollision::execIsAlreadyHit)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlreadyHit_Implementation(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerStageCollision::execIsMyMovesStageCollisionValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMyMovesStageCollisionValue_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerStageCollision::execIsTargetMovesStageCollisionValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargetMovesStageCollisionValue_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerStageCollision::execMoveCapsule)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveCapsule(Z_Param_Actor,Z_Param_Out_Location,Z_Param_Out_Transform,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	static FName NAME_UELPlayerStageCollision_IsAlreadyHit = FName(TEXT("IsAlreadyHit"));
	bool UELPlayerStageCollision::IsAlreadyHit(FName const& Tag)
	{
		ELPlayerStageCollision_eventIsAlreadyHit_Parms Parms;
		Parms.Tag=Tag;
		ProcessEvent(FindFunctionChecked(NAME_UELPlayerStageCollision_IsAlreadyHit),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELPlayerStageCollision_IsMyMovesStageCollisionValue = FName(TEXT("IsMyMovesStageCollisionValue"));
	bool UELPlayerStageCollision::IsMyMovesStageCollisionValue()
	{
		ELPlayerStageCollision_eventIsMyMovesStageCollisionValue_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELPlayerStageCollision_IsMyMovesStageCollisionValue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELPlayerStageCollision_IsTargetMovesStageCollisionValue = FName(TEXT("IsTargetMovesStageCollisionValue"));
	bool UELPlayerStageCollision::IsTargetMovesStageCollisionValue()
	{
		ELPlayerStageCollision_eventIsTargetMovesStageCollisionValue_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELPlayerStageCollision_IsTargetMovesStageCollisionValue),&Parms);
		return !!Parms.ReturnValue;
	}
	void UELPlayerStageCollision::StaticRegisterNativesUELPlayerStageCollision()
	{
		UClass* Class = UELPlayerStageCollision::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAlreadyHit", &UELPlayerStageCollision::execIsAlreadyHit },
			{ "IsMyMovesStageCollisionValue", &UELPlayerStageCollision::execIsMyMovesStageCollisionValue },
			{ "IsTargetMovesStageCollisionValue", &UELPlayerStageCollision::execIsTargetMovesStageCollisionValue },
			{ "MoveCapsule", &UELPlayerStageCollision::execMoveCapsule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerStageCollision_eventIsAlreadyHit_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::NewProp_Tag_MetaData)) };
	void Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPlayerStageCollision_eventIsAlreadyHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerStageCollision_eventIsAlreadyHit_Parms), &Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerStageCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerStageCollision, nullptr, "IsAlreadyHit", nullptr, nullptr, sizeof(ELPlayerStageCollision_eventIsAlreadyHit_Parms), Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPlayerStageCollision_eventIsMyMovesStageCollisionValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerStageCollision_eventIsMyMovesStageCollisionValue_Parms), &Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerStageCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerStageCollision, nullptr, "IsMyMovesStageCollisionValue", nullptr, nullptr, sizeof(ELPlayerStageCollision_eventIsMyMovesStageCollisionValue_Parms), Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPlayerStageCollision_eventIsTargetMovesStageCollisionValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerStageCollision_eventIsTargetMovesStageCollisionValue_Parms), &Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerStageCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerStageCollision, nullptr, "IsTargetMovesStageCollisionValue", nullptr, nullptr, sizeof(ELPlayerStageCollision_eventIsTargetMovesStageCollisionValue_Parms), Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics
	{
		struct ELPlayerStageCollision_eventMoveCapsule_Parms
		{
			AActor* Actor;
			FVector Location;
			FTransform Transform;
			FHitResult HitResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerStageCollision_eventMoveCapsule_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerStageCollision_eventMoveCapsule_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerStageCollision_eventMoveCapsule_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerStageCollision_eventMoveCapsule_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerStageCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerStageCollision, nullptr, "MoveCapsule", nullptr, nullptr, sizeof(ELPlayerStageCollision_eventMoveCapsule_Parms), Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELPlayerStageCollision_NoRegister()
	{
		return UELPlayerStageCollision::StaticClass();
	}
	struct Z_Construct_UClass_UELPlayerStageCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_Native_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player_Native;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldEnableState_MetaData[];
#endif
		static void NewProp_OldEnableState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OldEnableState;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CollisionCheckStart_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionCheckStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionCheckStart;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tmpPos_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tmpPos_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tmpPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_tmpPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPlayerStageCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELPlayerStageCollision_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELPlayerStageCollision_IsAlreadyHit, "IsAlreadyHit" }, // 4124780771
		{ &Z_Construct_UFunction_UELPlayerStageCollision_IsMyMovesStageCollisionValue, "IsMyMovesStageCollisionValue" }, // 1836178813
		{ &Z_Construct_UFunction_UELPlayerStageCollision_IsTargetMovesStageCollisionValue, "IsTargetMovesStageCollisionValue" }, // 1166622338
		{ &Z_Construct_UFunction_UELPlayerStageCollision_MoveCapsule, "MoveCapsule" }, // 3949703042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerStageCollision_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELPlayerStageCollision.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerStageCollision.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Player_Native_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerStageCollision" },
		{ "ModuleRelativePath", "Public/ELPlayerStageCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Player_Native = { "Player_Native", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerStageCollision, Player_Native), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Player_Native_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Player_Native_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionArray_Inner = { "CollisionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELPlayerStageCollisionActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerStageCollision" },
		{ "ModuleRelativePath", "Public/ELPlayerStageCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionArray = { "CollisionArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerStageCollision, CollisionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Enable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerStageCollision" },
		{ "ModuleRelativePath", "Public/ELPlayerStageCollision.h" },
	};
#endif
	void Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((UELPlayerStageCollision*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELPlayerStageCollision), &Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_OldEnableState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerStageCollision" },
		{ "ModuleRelativePath", "Public/ELPlayerStageCollision.h" },
	};
#endif
	void Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_OldEnableState_SetBit(void* Obj)
	{
		((UELPlayerStageCollision*)Obj)->OldEnableState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_OldEnableState = { "OldEnableState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELPlayerStageCollision), &Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_OldEnableState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_OldEnableState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_OldEnableState_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionCheckStart_Inner = { "CollisionCheckStart", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionCheckStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerStageCollision" },
		{ "ModuleRelativePath", "Public/ELPlayerStageCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionCheckStart = { "CollisionCheckStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerStageCollision, CollisionCheckStart), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionCheckStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionCheckStart_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_tmpPos_ValueProp = { "tmpPos", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_tmpPos_Key_KeyProp = { "tmpPos_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_tmpPos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerStageCollision" },
		{ "ModuleRelativePath", "Public/ELPlayerStageCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_tmpPos = { "tmpPos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPlayerStageCollision, tmpPos), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_tmpPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_tmpPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELPlayerStageCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Player_Native,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_OldEnableState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionCheckStart_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_CollisionCheckStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_tmpPos_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_tmpPos_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPlayerStageCollision_Statics::NewProp_tmpPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPlayerStageCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPlayerStageCollision>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPlayerStageCollision_Statics::ClassParams = {
		&UELPlayerStageCollision::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELPlayerStageCollision_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerStageCollision_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELPlayerStageCollision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerStageCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPlayerStageCollision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPlayerStageCollision_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPlayerStageCollision, 2745265449);
	template<> ABP_200508_API UClass* StaticClass<UELPlayerStageCollision>()
	{
		return UELPlayerStageCollision::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPlayerStageCollision(Z_Construct_UClass_UELPlayerStageCollision, &UELPlayerStageCollision::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPlayerStageCollision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPlayerStageCollision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
