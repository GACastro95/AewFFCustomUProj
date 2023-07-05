// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPoolDecalBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPoolDecalBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPoolDecalBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPoolDecalBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPoolActorInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSPoolDecalBase::execGetDecalComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDecalComponent**)Z_Param__Result=P_THIS->GetDecalComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPoolDecalBase::execPlayAtLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_DecalSize);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeSpan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDecalComponent**)Z_Param__Result=P_THIS->PlayAtLocation_Implementation(Z_Param_DecalSize,Z_Param_Location,Z_Param_Rotation,Z_Param_LifeSpan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSPoolDecalBase::execPlayAttached)
	{
		P_GET_STRUCT(FVector,Z_Param_DecalSize);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeSpan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAttached_Implementation(Z_Param_DecalSize,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_LifeSpan);
		P_NATIVE_END;
	}
	static FName NAME_AELSSPoolDecalBase_PlayAtLocation = FName(TEXT("PlayAtLocation"));
	UDecalComponent* AELSSPoolDecalBase::PlayAtLocation(FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan)
	{
		ELSSPoolDecalBase_eventPlayAtLocation_Parms Parms;
		Parms.DecalSize=DecalSize;
		Parms.Location=Location;
		Parms.Rotation=Rotation;
		Parms.LifeSpan=LifeSpan;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPoolDecalBase_PlayAtLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSPoolDecalBase_PlayAttached = FName(TEXT("PlayAttached"));
	void AELSSPoolDecalBase::PlayAttached(FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, float LifeSpan)
	{
		ELSSPoolDecalBase_eventPlayAttached_Parms Parms;
		Parms.DecalSize=DecalSize;
		Parms.AttachToComponent=AttachToComponent;
		Parms.AttachPointName=AttachPointName;
		Parms.Location=Location;
		Parms.Rotation=Rotation;
		Parms.LocationType=LocationType;
		Parms.LifeSpan=LifeSpan;
		ProcessEvent(FindFunctionChecked(NAME_AELSSPoolDecalBase_PlayAttached),&Parms);
	}
	void AELSSPoolDecalBase::StaticRegisterNativesAELSSPoolDecalBase()
	{
		UClass* Class = AELSSPoolDecalBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDecalComponent", &AELSSPoolDecalBase::execGetDecalComponent },
			{ "PlayAtLocation", &AELSSPoolDecalBase::execPlayAtLocation },
			{ "PlayAttached", &AELSSPoolDecalBase::execPlayAttached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics
	{
		struct ELSSPoolDecalBase_eventGetDecalComponent_Parms
		{
			UDecalComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventGetDecalComponent_Parms, ReturnValue), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPoolDecalBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPoolDecalBase, nullptr, "GetDecalComponent", nullptr, nullptr, sizeof(ELSSPoolDecalBase_eventGetDecalComponent_Parms), Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAtLocation_Parms, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAtLocation_Parms, LifeSpan), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAtLocation_Parms, ReturnValue), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_LifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPoolDecalBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPoolDecalBase, nullptr, "PlayAtLocation", nullptr, nullptr, sizeof(ELSSPoolDecalBase_eventPlayAtLocation_Parms), Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics
	{
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAttached_Parms, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSPoolDecalBase_eventPlayAttached_Parms, LifeSpan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::NewProp_LifeSpan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPoolDecalBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSPoolDecalBase, nullptr, "PlayAttached", nullptr, nullptr, sizeof(ELSSPoolDecalBase_eventPlayAttached_Parms), Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSPoolDecalBase_NoRegister()
	{
		return AELSSPoolDecalBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSPoolDecalBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDisplay_MetaData[];
#endif
		static void NewProp_IsDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDisplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSPoolDecalBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSPoolDecalBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSPoolDecalBase_GetDecalComponent, "GetDecalComponent" }, // 446459347
		{ &Z_Construct_UFunction_AELSSPoolDecalBase_PlayAtLocation, "PlayAtLocation" }, // 141954812
		{ &Z_Construct_UFunction_AELSSPoolDecalBase_PlayAttached, "PlayAttached" }, // 1340362623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPoolDecalBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPoolDecalBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPoolDecalBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_DecalComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPoolDecalBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSPoolDecalBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_DecalComponent = { "DecalComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPoolDecalBase, DecalComponent), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_DecalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_DecalComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_RemainTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPoolDecalBase" },
		{ "ModuleRelativePath", "Public/ELSSPoolDecalBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_RemainTime = { "RemainTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSPoolDecalBase, RemainTime), METADATA_PARAMS(Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_RemainTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_RemainTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_IsDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPoolDecalBase" },
		{ "ModuleRelativePath", "Public/ELSSPoolDecalBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_IsDisplay_SetBit(void* Obj)
	{
		((AELSSPoolDecalBase*)Obj)->IsDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_IsDisplay = { "IsDisplay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSPoolDecalBase), &Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_IsDisplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_IsDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_IsDisplay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSPoolDecalBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_DecalComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_RemainTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPoolDecalBase_Statics::NewProp_IsDisplay,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSPoolDecalBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSPoolActorInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSPoolDecalBase, IELSSPoolActorInterface), false },
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSPoolDecalBase, IELSSActorCommonInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSPoolDecalBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSPoolDecalBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSPoolDecalBase_Statics::ClassParams = {
		&AELSSPoolDecalBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSPoolDecalBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPoolDecalBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSPoolDecalBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPoolDecalBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSPoolDecalBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSPoolDecalBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSPoolDecalBase, 1120250121);
	template<> ABP_200508_API UClass* StaticClass<AELSSPoolDecalBase>()
	{
		return AELSSPoolDecalBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSPoolDecalBase(Z_Construct_UClass_AELSSPoolDecalBase, &AELSSPoolDecalBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSPoolDecalBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSPoolDecalBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
